#pragma once
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include "GraphicsMessage.h"

class GraphicsMessageQueue
{
private:
	sf::Mutex locked;
public:
	void ReceiveMessage(GraphicsMessage);
};