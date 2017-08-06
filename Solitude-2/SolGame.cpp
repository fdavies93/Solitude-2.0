#include "SolGame.h"

SolGame::SolGame()
{
	//declare graphics
	graphics = std::make_unique<GraphicsSystem>();
	components = std::make_unique<ComponentSystem>();
	pipeline = std::make_shared<DataPipeline>();
	exit = false;
}

SolGame::~SolGame()
{
}

void SolGame::Update()
{
	
}

void SolGame::Start()
{
	//initial settings, etc

	//game loop
	while (!exit)
	{
		Update();
	}
}