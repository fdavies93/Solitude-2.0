#include "Camera.h"

Camera::Camera()
{
	type = "Camera";
	x = y = w = h = 0.0;
}

Camera::Camera(const Camera& copy)
{
	type = copy.type;
	objectId = copy.objectId;
	x = copy.x;
	y = copy.y;
	w = copy.w;
	h = copy.h;
}

const Camera& Camera::operator=(const Camera& copy)
{
	type = copy.type;
	objectId = copy.objectId;
	x = copy.x;
	y = copy.y;
	w = copy.w;
	h = copy.h;
	return *this;
}