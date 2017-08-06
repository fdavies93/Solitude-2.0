#pragma once
#include "SolitudeHeaders.h"
#include "Component.h"


class Camera : Component {
public:
	Camera();
	Camera(const Camera&);
	const Camera& operator=(const Camera&);
	double x, y, w, h;
};