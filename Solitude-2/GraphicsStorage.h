#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "ImageData.h"
#include "UtilityFunctions.h"
#include <iostream>

class GraphicsStorage
{
private:
	std::map<std::string, ImageData> images;
public:
	//loads all metadata based on a settings file: imageData 
 	bool LoadData(sf::String);
	ImageData GetImageData(sf::String);
};