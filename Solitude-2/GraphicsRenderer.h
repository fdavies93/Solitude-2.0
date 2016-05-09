#pragma once
#include "SolitudeHeaders.h"
#include "GraphicsStorage.h"
#include "GraphicsCache.h"
#include "RenderData.h"

class GraphicsRenderer
{
private:
	std::shared_ptr<GraphicsStorage> storage;
	std::shared_ptr<GraphicsCache> cache;
public:
	GraphicsRenderer();
	void Render(const RenderData&);//renders everything
};