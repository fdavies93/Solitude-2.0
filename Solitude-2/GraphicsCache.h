#pragma once
#include "SolitudeHeaders.h"
#include "GraphicsStorage.h"
#include "GraphicsLoader.h"
#include "TextureData.h"

class GraphicsCache
{
private:
	std::shared_ptr<GraphicsLoader> loader;
	std::map<std::string, TextureData> textures;
public:
	GraphicsCache();
	void CacheTexture(std::string);
	void UncacheTexture(std::string);
	TextureData GetTexture(std::string);
	void Update();//gets new output messages from loader, updates texture list, informs renderer 
};