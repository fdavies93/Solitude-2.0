#pragma once
#include "SolitudeHeaders.h"
#include "Component.h"
#include "EventQueue.h"
#include "GraphicsSystem.h"
#include "ComponentSystem.h"
#include "DataPipeline.h"

/* 
	Note: Solitude 2 does not have a GameObject type. It adheres to the strict form (Adam Martin's) 
	of the Component-Entity Model. All objects are 'imaginary' and are actually
	the synthesis of numerous Components by the SceneManager, which are delivered to various
	other modules within the engine.
*/

//
class SolGame
{
private:
	std::unique_ptr<GraphicsSystem> graphics;
	std::unique_ptr<ComponentSystem> components;
	std::shared_ptr<DataPipeline> pipeline;
	bool exit;
public:
	SolGame();
	~SolGame();
	
	void Update();//sends components off to all modules for processing & action
	void Print();
	void Start();
};