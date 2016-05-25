#include "TextureData.h"

TextureData::TextureData()
{

}

TextureData::TextureData(const TextureData& toCopy)
{
	fileName = toCopy.fileName;
	texture = toCopy.texture;
	usedBy = toCopy.usedBy;
}

bool TextureData::operator=(const TextureData& toCopy)
{
	fileName = toCopy.fileName;
	texture = toCopy.texture;
	usedBy = toCopy.usedBy;
	return true;
}