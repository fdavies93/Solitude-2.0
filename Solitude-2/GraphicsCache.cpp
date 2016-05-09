#include "GraphicsCache.h"

GraphicsCache::GraphicsCache()
{
	storage = std::make_shared<GraphicsStorage>();
	loader = std::make_shared<GraphicsLoader>();
}