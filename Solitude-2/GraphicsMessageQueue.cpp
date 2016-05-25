#include "GraphicsMessageQueue.h"

void GraphicsMessageQueue::ReceiveMessage(const GraphicsMessage& message)
{
	std::lock_guard<std::mutex> lock(queueMutex);//locks, or blocks until it can acquire lock 
	messages.push(message);
	//unlocks on finish
}

GraphicsMessage GraphicsMessageQueue::GetNextMessage()
{
	std::lock_guard<std::mutex> lock(queueMutex);
	GraphicsMessage returnVal = messages.front();
	messages.pop();
	return returnVal;
}

std::queue<GraphicsMessage> GraphicsMessageQueue::GetAllMessages()
{
	std::lock_guard<std::mutex> lock(queueMutex);
	std::queue<GraphicsMessage> returnQueue;
	while (messages.size() > 0)
	{
		returnQueue.push(messages.front());
		messages.pop();
	}
	return returnQueue;
}

int GraphicsMessageQueue::size()
{
	std::lock_guard<std::mutex> lock(queueMutex);
	return messages.size();
}