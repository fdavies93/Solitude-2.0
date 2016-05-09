#include "GraphicsCache.h"

GraphicsCache::GraphicsCache()
{
	storage = new GraphicsStorage;
	loader = new GraphicsLoader;
}