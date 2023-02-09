#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "Reader.h"
#include "RawEthernetFrame.h"
#include "eCPRI.h"
#include "Printer.h"
using namespace std;

#define TypeIndexOne   40
#define TypeIndexTwo   41
#define TypeIndexThree 42
#define TypeIndexFour  43
#define eCPRI_Type  "AEFE"
#define RawEhternetFrame_Type  "88F7"
#define Protocol_Version_Index 44
#define Concatenation_Indicator_Index 45
#define MessageTypeIndex 46
#define Payload_index 48
#define PayloadSize_bits 4
#define RTC_ID_index 52
#define RTC_IDSize_bits 4
#define Sequence_ID_index 56
#define Sequence_ID_bits 4
#define CRC_bits 8
#define Destination_Address_index 16
#define Destination_Address_bits 12
#define Source_Address_index 28
#define Source_Address_bits 12



const std::vector<int> TypeIndecies{ TypeIndexOne , TypeIndexTwo , TypeIndexThree ,TypeIndexFour };
class Parser
{
private:
	//Reader Data;
	std::string Type;
	std::vector<std::string> Input;
	//std::vector<RawEhternetFrame *> REF;
	RawEhternetFrame REF[100];
	Printer printer;
public:
	int NumberOfPackets;

	Parser(std::vector<std::string> input);
	void Parse();
	std::string GetType(std::string Packet);
	void  Parse_RawEthernetFrames(std::string Packet, int indexOfThePacket);
	void            Parse_eCPRI(std::string Packet, int indexOfThePacket);

};