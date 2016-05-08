#pragma once
#include <SFML/Graphics.hpp>
#include "GraphicsStorage.h"
#include "GraphicsCache.h"
#include "RenderData.h"

class GraphicsRenderer
{
private:
	const GraphicsStorage* storage;
	const GraphicsCache* cache;
public:
	GraphicsRenderer();
	void Render(const RenderData&);//renders everything
};