#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

class GraphicsLoader
{
private:
	sf::Mutex messageLock;
public:
	void Start();
};