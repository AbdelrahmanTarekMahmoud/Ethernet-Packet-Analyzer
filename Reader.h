#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

class Reader
{
private:
	std::string path;
	std::string line;
public:
	std::vector<std::string> read(std::string Path);
	std::vector<std::string> GetInput();

	std::vector<std::string> Input;

};