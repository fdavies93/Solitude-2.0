#pragma once
#include "SolitudeHeaders.h"

class Component
{
public:
	std::string type;
	unsigned int objectId;
	std::map<std::string, double> numbers;
	std::map<std::string, std::string> strings;
	Component();
	Component(const Component&);
	const Component& operator=(const Component&);
};