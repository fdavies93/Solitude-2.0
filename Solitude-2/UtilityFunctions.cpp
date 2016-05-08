#include "UtilityFunctions.h"

std::vector<sf::String> LoadCSV(sf::String fileName)
{
	sf::FileInputStream fileStream;
	sf::String fileString;
	int64_t fileSize;
	std::vector<sf::String> returnVector;
	char* curChar = new char;
	fileStream.open(fileName);
	fileSize = fileStream.getSize();
	while (fileStream.tell() != -1 && fileStream.tell() <= fileSize)
	{
		fileStream.read(curChar, sizeof(char));
		if (*curChar != ',') fileString += *curChar;
		if (fileStream.tell() == fileSize || *curChar == ',')
		{
			returnVector.push_back(fileString);
			fileString.clear();
			if (fileStream.tell() == fileSize) fileStream.seek(fileStream.tell() + sizeof(char));
		}
	}
	delete curChar;
	return returnVector;
}