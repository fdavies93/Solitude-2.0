#pragma once
#include "SolitudeHeaders.h"
#include "ImageData.h"
#include "UtilityFunctions.h"

class GraphicsStorage
{
private:
	std::map<std::string, ImageData> images;
public:
	//loads all metadata based on a settings file: imageData 
 	bool LoadData(sf::String);
	ImageData GetImageData(sf::String);
};