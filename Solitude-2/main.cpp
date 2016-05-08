#include <SFML/Graphics.hpp>
#include "GraphicsStorage.h"

int main()
{
	GraphicsStorage storage;
	//printf("ate!");
	//storage.LoadData("data/images.txt");
	std::vector<sf::String> entries = LoadCSV("data/example.csv");
	for (int i = 0; i < entries.size(); ++i)
	{
		if (i > 0) printf(", ");
		printf("%s", entries[i].toAnsiString().c_str());
	}
	system("PAUSE");
	return 0;
}