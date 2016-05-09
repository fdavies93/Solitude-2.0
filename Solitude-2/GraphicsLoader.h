#pragma once
#include "SolitudeHeaders.h"

class GraphicsLoader
{
private:
	std::condition_variable messageCondition;
public:
	void Start();
};