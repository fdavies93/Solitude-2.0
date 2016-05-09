#pragma once
#include "SolitudeHeaders.h"

std::vector<sf::String> LoadCSV(sf::String);//takes filename, outputs list of values
bool ParseLong(const char*, long*);