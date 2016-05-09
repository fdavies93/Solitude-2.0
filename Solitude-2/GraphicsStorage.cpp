#include "GraphicsStorage.h"

bool GraphicsStorage::LoadData(sf::String imageFile)
{
	try
	{
		std::vector<sf::String> imageEntries = LoadCSV(imageFile);
		if (imageEntries.size() < 1) throw 0;
		else if (imageEntries.size() % 6 != 0) throw 1;
		ImageData curImageData;
		long curVal;
		char* errorChar;
		for (int curEntry = 0; curEntry < imageEntries.size(); ++curEntry)
		{
			switch (curEntry % 6)
			{
			case 0:
				curImageData.name = imageEntries[curEntry];
				break;
			case 1:
				curImageData.fileName = imageEntries[curEntry];
				break;
			case 2:
				if (ParseLong(imageEntries[curEntry].toAnsiString().c_str(), &curVal)) curImageData.rectangle.left = curVal;
				else throw 2;
				break;
			case 3:
				if (ParseLong(imageEntries[curEntry].toAnsiString().c_str(), &curVal)) curImageData.rectangle.top = curVal;
				else throw 2;
				break;
			case 4:
				if (ParseLong(imageEntries[curEntry].toAnsiString().c_str(), &curVal)) curImageData.rectangle.width = curVal;
				else throw 2;
				break;
			case 5:
				if (ParseLong(imageEntries[curEntry].toAnsiString().c_str(), &curVal)) curImageData.rectangle.height = curVal;
				else throw 2;
				images[curImageData.name] = curImageData;
				break;
			}
		}
	}
	catch (int errorMessage) {
		switch (errorMessage)
		{
		case 0:
			std::cerr << "Couldn't find image file " << imageFile.toAnsiString() << "! (Are you running the application in the right place?)\n";
			break;
		case 1:
			std::cerr << "Wrong number of entries in image file " << imageFile.toAnsiString() << "! (Should be a multiple of 5)\n";
			break;
		case 2:
			std::cerr << "Malformed number in image file " << imageFile.toAnsiString() << "!\n";
			break;
		}
		return false;
	}
	return true;
}

ImageData GraphicsStorage::GetImageData(sf::String name)
{
	return images[name];
}