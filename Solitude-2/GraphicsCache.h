#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "GraphicsStorage.h"

class GraphicsCache
{
private:
	const GraphicsStorage* storage;
	std::map<std::string, sf::Texture> spriteSheets;
public:
	GraphicsCache(GraphicsStorage*);
	bool CacheTexture(sf::String);
	bool UncacheTexture(sf::String);
};