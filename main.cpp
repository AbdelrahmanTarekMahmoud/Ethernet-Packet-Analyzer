#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>


#include "RawEthernetFrame.h"
#include "eCPRI.h"
#include "Parser.h"
#include "Reader.h"

int main()
{
	std::vector<std::string> Result;
	Reader reader;
	Result = reader.read("input_packets.txt");
	std::cout << reader.Input.size() << std::endl;
	Parser parser(Result);
	std::cout << parser.NumberOfPackets << std::endl;
	parser.Parse();
	return 0;
}
