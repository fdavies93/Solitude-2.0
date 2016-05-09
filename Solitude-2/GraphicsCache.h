#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "GraphicsStorage.h"
#include "GraphicsLoader.h"

class GraphicsCache
{
private:
	GraphicsStorage* storage;
	GraphicsLoader* loader;
	std::map<std::string, sf::Texture> spriteSheets;
public:
	GraphicsCache();
	bool CacheTexture(sf::String);
	bool UncacheTexture(sf::String);
};