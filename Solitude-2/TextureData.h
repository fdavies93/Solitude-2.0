#pragma once
#include "SolitudeHeaders.h"

class TextureData
{
public:
	std::shared_ptr<sf::Texture> texture;
	int usedBy;
	TextureData();
	TextureData(TextureData&);
	bool operator=(TextureData&);
};