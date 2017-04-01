#pragma once
#include "SolitudeHeaders.h"
#include "GraphicsStorage.h"
#include "GraphicsCache.h"

class ScreenManager
{
private:
	GraphicsCache cache;
	GraphicsStorage storage;
	std::map<int, sf::Sprite> sprites;//wrap the sprites in something? in map for easily tying gameobjs to sprites
public:
	void Update();
};