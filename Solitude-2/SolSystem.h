#pragma once
#include "SolitudeHeaders.h"
#include "DataPipeline.h"

class SolSystem
{
protected:
	std::string type;
	std::shared_ptr<DataPipeline> pipeline;
	std::list<std::string> inputs;//they get all the data from the pipe, plus components listed as inputs
public:
	SolSystem();
	void Update();
};
