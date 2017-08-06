#pragma once
#include "SolitudeHeaders.h"
#include "Component.h"

class Sprite : Component {
public:
	std::string name;
	Sprite();
	Sprite(const Sprite&);
	const Sprite& operator=(const Sprite&);
};