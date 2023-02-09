#include "Reader.h"

std::vector<std::string> Reader::read(std::string Path)
{
	std::ifstream inputFile(Path);
	if (inputFile)
	{
		std::cout << "done" << std::endl;
	}
	while (getline(inputFile, line))
	{
		Input.push_back(line);
	}
	return Input;
}

std::vector<std::string> Reader::GetInput()
{
	return Input;
}