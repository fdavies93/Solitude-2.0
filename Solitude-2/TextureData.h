#pragma once
#include "SolitudeHeaders.h"

class TextureData
{
public:
	std::string fileName;
	std::shared_ptr<sf::Texture> texture;
	int usedBy;
	TextureData();
	TextureData(const TextureData&);
	bool operator=(const TextureData&);
};