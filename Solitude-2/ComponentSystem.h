#pragma once
#include "SolitudeHeaders.h"
#include "Component.h"

//the Component System is probably the single most important system in the game; its role is to store and arrange components

class ComponentSystem
{
private:
	//might want it to be possible both to pass components by reference
	//and copy them
	std::map<std::string, std::list<Component>> components;//maps component typename to components
public:
	void AddComponent(unsigned int, std::shared_ptr<Component>);//object id, component
	void RemoveComponent(unsigned int, std::shared_ptr<Component>);//object id, component type
	void RemoveObject(unsigned int);
	std::list<std::shared_ptr<Component>> GetComponentsByType(std::string);//returns list of ALL components of a certain type
};