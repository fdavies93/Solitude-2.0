#pragma once
#include "SolitudeHeaders.h"
#include "GraphicsStorage.h"
#include "GraphicsLoader.h"

class GraphicsCache
{
private:
	std::shared_ptr<GraphicsStorage> storage;
	std::shared_ptr<GraphicsLoader> loader;
	std::map<std::string, sf::Texture> spriteSheets;
public:
	GraphicsCache();
	bool CacheTexture(sf::String);
	bool UncacheTexture(sf::String);
};