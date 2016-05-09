#pragma once
#include "SolitudeHeaders.h"
#include "GraphicsMessage.h"

class GraphicsMessageQueue
{
private:
	std::mutex queueLock;
	std::vector<GraphicsMessage> messages;
public:
	void ReceiveMessage(GraphicsMessage);
};