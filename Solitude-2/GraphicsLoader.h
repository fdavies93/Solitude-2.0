#pragma once
#include "SolitudeHeaders.h"
#include "GraphicsMessageQueue.h"

class GraphicsLoader
{
private:
	std::condition_variable wakeCondition;
	std::mutex wakeMutex;
	std::thread loadingThread;
	GraphicsMessageQueue inputQueue;//main thread pushes to, subthread removes from
	GraphicsMessageQueue outputQueue;//subthread pushes to, main thread removes from
	void ThreadLoop();
	bool quit;
public:
	GraphicsLoader();
	~GraphicsLoader();
	void Start();
	void LoadTexture(std::string);
	//returns all messages in output queue and empties queue, blocking until it can do so
	std::queue<GraphicsMessage> GetOutputMessages();
};