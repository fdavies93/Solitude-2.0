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
	bool LoadDataFile(sf::String);
public:
 	bool LoadData(sf::String);//loads all metadata based on a settings file
	ImageData GetImageData(sf::String);
	
};