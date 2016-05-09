#pragma once
#include <SFML/System.hpp>
#include <vector>

std::vector<sf::String> LoadCSV(sf::String);//takes filename, outputs list of values
bool ParseLong(const char*, long*);