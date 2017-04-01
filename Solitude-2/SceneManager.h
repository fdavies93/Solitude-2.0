#pragma once
#include "SolitudeHeaders.h"
#include "Component.h"

/* 
	Note: Solitude 2 does not have a GameObject type. It adheres to the strict form of the
	Component-Entity Model. All objects are 'imaginary' and are actually
	the synthesis of numerous Components by the SceneManager, which are delivered to various
	other modules within the engine.
*/
class SceneManager
{
private:
	std::map<unsigned int, std::vector<Component>> components;//maps object id to its components
public:
	void AddComponent(unsigned int, Component);//object id, component
	void RemoveComponent(unsigned int, Component);//object id, component
};