#pragma once
#include "SolitudeHeaders.h"
#include "SolSystem.h"

class CameraSystem : SolSystem
{
public:
	CameraSystem(std::shared_ptr<DataPipeline>);
	void Update();
};