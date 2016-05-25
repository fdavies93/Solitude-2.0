#pragma once
#include "SolitudeHeaders.h"
#include "GraphicsMessage.h"

class GraphicsMessageQueue
{
private:
	std::mutex queueMutex;
	std::queue<GraphicsMessage> messages;
public:
	void ReceiveMessage(const GraphicsMessage&);
	GraphicsMessage GetNextMessage();//pops message and returns a copy
	std::queue<GraphicsMessage> GetAllMessages();
	int size();
};