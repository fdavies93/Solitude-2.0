#pragma once
#include "SolitudeHeaders.h"
#include "Component.h"

//the Component System is probably the single most important system in the game; its role is to store and arrange components

class ComponentSystem
{
private:
	std::map<std::string, std::list<std::shared_ptr<Component>>> components;//maps component typename to components
public:
	void AddComponent(unsigned int, std::shared_ptr<Component>);//object id, component
	void RemoveComponent(unsigned int, std::shared_ptr<Component>);//object id, component type
	std::list<std::shared_ptr<Component>> GetComponentsByType(std::string);//returns list of ALL components of a certain type
};