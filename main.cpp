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
	Parser parser(Result);
	parser.Parse();
	return 0;
}
