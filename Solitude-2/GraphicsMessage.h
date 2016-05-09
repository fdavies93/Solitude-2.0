#pragma once
#include <SFML\System.hpp>
#include "TextureData.h"

enum GRAPHICS_MESSAGE_TYPES
{
	MESSAGE_CACHE_TEXTURE,
	MESSAGE_UNCACHE_TEXTURE,
	MESSAGE_FINISHED_CACHING,
	MESSAGE_FINISHING_UNCACHING,
};

class GraphicsMessage
{
public:
	GRAPHICS_MESSAGE_TYPES type;
	TextureData message;
};