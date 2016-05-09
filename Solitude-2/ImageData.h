#pragma once
#include "SolitudeHeaders.h"

class ImageData
{
public:
	sf::String name;
	sf::String fileName;
	sf::Rect<int> rectangle;
	ImageData();//regular constructor
	ImageData(ImageData&);//copy constructor
	bool operator=(ImageData&);
};