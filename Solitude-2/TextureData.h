#pragma once
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class TextureData
{
public:
	sf::Texture* texture;
	int usedBy;
	TextureData();
	TextureData(TextureData&);
	bool operator=(TextureData&);
};