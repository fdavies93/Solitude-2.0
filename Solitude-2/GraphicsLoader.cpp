#include "GraphicsLoader.h"

GraphicsLoader::GraphicsLoader()
{
}

void GraphicsLoader::ThreadLoop()
{
	quit = false;
	GraphicsMessage curInput;
	GraphicsMessage curOutput;
	std::shared_ptr<sf::Texture> curTexture;
	std::unique_lock<std::mutex> wakeLock(wakeMutex);
	while (!quit)
	{
		wakeCondition.wait(wakeLock);
		while (inputQueue.size() > 0)
		{
			curInput = inputQueue.GetNextMessage();
			switch (curInput.type)
			{
			case GRAPHICS_MESSAGE_TYPES::MESSAGE_CACHE_TEXTURE:
				curTexture = std::make_shared<sf::Texture>();
				if (curTexture->loadFromFile(curInput.message.fileName))
				{
					//load successful, send back graphics data
					curOutput.type = GRAPHICS_MESSAGE_TYPES::MESSAGE_FINISHED_CACHING;
					curOutput.message.usedBy = 0;
					curOutput.message.texture = curTexture;
					curOutput.message.fileName = curInput.message.fileName;
					outputQueue.ReceiveMessage(curOutput);
				}
				else 
				{
					//load unsuccessful, send message saying as much
					curOutput.type = GRAPHICS_MESSAGE_TYPES::MESSAGE_CACHE_FAILURE;
					curOutput.message.usedBy = 0;
					curOutput.message.fileName = curInput.message.fileName;
					outputQueue.ReceiveMessage(curOutput);
				}
				break;
			case GRAPHICS_MESSAGE_TYPES::MESSAGE_EXIT:
				quit = true;
				break;
			default:
				printf("Invalid message sent to loader: check your code.\n");
				break;
			}
		}
	}
}

//this handles all the functionality that needs to go in the loading thread
void GraphicsLoader::Start()
{
	loadingThread = std::thread(&GraphicsLoader::ThreadLoop, this);
}

void GraphicsLoader::LoadTexture(std::string fileName)
{
	GraphicsMessage message(GRAPHICS_MESSAGE_TYPES::MESSAGE_CACHE_TEXTURE, fileName);
	inputQueue.ReceiveMessage(message);
	wakeCondition.notify_one();
	//attempt to wake up loader thread, or leave it to run if not
}

std::queue<GraphicsMessage> GraphicsLoader::GetOutputMessages()
{
	return outputQueue.GetAllMessages();
}

GraphicsLoader::~GraphicsLoader()
{
	quit = true;
	wakeCondition.notify_one();
	loadingThread.join();
}