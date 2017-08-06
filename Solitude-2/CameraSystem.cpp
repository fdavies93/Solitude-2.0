#include "CameraSystem.h"

CameraSystem::CameraSystem(std::shared_ptr<DataPipeline> pipe)
{
	type = "Camera";
	pipeline = pipe;
	inputs = {"Camera","Transform","Sprite"};
}

void CameraSystem::Update()
{
	//get sprite & transform from pipeline
	//cull everything outside the screen area
	//translate positions to positions on screen
	//send to graphics system
}