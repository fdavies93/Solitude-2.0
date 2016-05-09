#include "ImageData.h"

ImageData::ImageData()
{

}

ImageData::ImageData(ImageData& toCopy)
{
	rectangle = toCopy.rectangle;
	fileName = toCopy.fileName;
	name = toCopy.name;
}

bool ImageData::operator=(ImageData& toCopy)
{
	rectangle = toCopy.rectangle;
	fileName = toCopy.fileName;
	name = toCopy.name;
	return true;
}

