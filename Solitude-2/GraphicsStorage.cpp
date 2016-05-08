#include "GraphicsStorage.h"

bool GraphicsStorage::LoadData(sf::String fileName)
{
	try
	{
		std::vector<sf::String> entries = LoadCSV(fileName);
		if (entries.size() < 1) throw 0;

	}
	catch (int errorMessage) {
		switch (errorMessage)
		{
		case 0:
			std::cerr << "No data in graphics data file " << fileName.toAnsiString() << "! (Are you running the application in the right place?\n";
			break;
		}
		return false;
	}
	return true;
}