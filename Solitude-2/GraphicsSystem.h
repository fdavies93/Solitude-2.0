#pragma once
#include "SolitudeHeaders.h"
#include "GraphicsStorage.h"
#include "GraphicsCache.h"
#include "Transform.h"
#include "EventQueue.h"

class GraphicsSystem
{
private:
	GraphicsCache cache;
	GraphicsStorage storage;
	std::map<int, sf::Sprite> sprites;//wrap the sprites in something? in map for easily tying gameobjs to sprites
public:
	GraphicsSystem();
	~GraphicsSystem();
	void Update(std::list<std::shared_ptr<Transform>>);
	//update positions of things on screen based on list captured by camera
	//unload if beyond camera in SPACIAL GRID
	//everything not listed by camera is UNLOADED, and print functions of sprites should flag them for unload
};