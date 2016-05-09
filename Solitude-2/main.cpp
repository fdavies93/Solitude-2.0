#include <SFML/Graphics.hpp>
#include "GraphicsStorage.h"

int main()
{
	GraphicsStorage storage;
	storage.LoadData("data/images.txt");
	ImageData data = storage.GetImageData("image001");
	printf("Left: %d Top: %d Width: %d Height: %d\n", data.rectangle.left, data.rectangle.top, data.rectangle.width, data.rectangle.height);
	system("PAUSE");
	return 0;
}