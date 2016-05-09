#include "TextureData.h"

TextureData::TextureData()
{

}

TextureData::TextureData(TextureData& toCopy)
{
	texture = toCopy.texture;
	usedBy = toCopy.usedBy;
}

bool TextureData::operator=(TextureData& toCopy)
{
	texture = toCopy.texture;
	usedBy = toCopy.usedBy;
	return true;
}