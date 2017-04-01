#pragma once
#include "SolitudeHeaders.h"
#include "TextureData.h"

enum GRAPHICS_MESSAGE_TYPES
{
	MESSAGE_CACHE_TEXTURE,
	MESSAGE_FINISHED_CACHING,
	MESSAGE_CACHE_FAILURE,
	MESSAGE_EXIT,
};

class GraphicsMessage
{
public:
	GRAPHICS_MESSAGE_TYPES type;
	TextureData message;
	GraphicsMessage();
	GraphicsMessage(const GRAPHICS_MESSAGE_TYPES&, const std::string&);
	GraphicsMessage(const GraphicsMessage&);
	bool operator=(const GraphicsMessage&);
};
