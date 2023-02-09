#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "RawEthernetFrame.h"
#include "eCPRI.h"

class Printer
{
private:
	RawEhternetFrame REF;
	eCPRI            ECPR;
	std::string      Path;
public:
	void PrintRawEthernetFrame(RawEhternetFrame RawObject , int indexOfThePacket ,std::string Packet  , std::string Path);
	void PrinteCPRI(eCPRI EnhancedObject, int indexOfThePacket , std::string Packet , std::string Path);

};