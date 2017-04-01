#include "GraphicsCache.h"

GraphicsCache::GraphicsCache()
{
	loader.Start();
}

void GraphicsCache::CacheTexture(std::string fileName)
{
	loader.LoadTexture(fileName);
}

void GraphicsCache::UncacheTexture(std::string fileName)
{
	textures.erase(fileName);
	//handle case where no such texture exists
}

TextureData GraphicsCache::GetTexture(std::string fileName)
{
	TextureData toReturn;
	try
	{
		toReturn = textures.at(fileName);
	}
	catch (std::out_of_range rangeException)
	{
		toReturn.usedBy = -1;
	}
	return toReturn;
}

void GraphicsCache::Update()
{
	std::queue<GraphicsMessage> newMessages = loader.GetOutputMessages();
	GraphicsMessage nextMsg;
	while (newMessages.size() > 0)
	{
		nextMsg = newMessages.front();
		newMessages.pop();
		if (nextMsg.type == GRAPHICS_MESSAGE_TYPES::MESSAGE_FINISHED_CACHING)
		{
			textures[nextMsg.message.fileName] = nextMsg.message;
			//add information to message queue for ScreenManager
		}
	}
}