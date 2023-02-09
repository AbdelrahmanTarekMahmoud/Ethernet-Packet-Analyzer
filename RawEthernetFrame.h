#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

class RawEhternetFrame
{
protected:
	std::string CRC;
	std::string Preamble;
	std::string DestinationAddress;
	std::string SourceAddress;
	std::string Payload;

public:
	RawEhternetFrame();
	std::string GetCRC();
	void SetCRC(std::string CRC);
	std::string GetPreamble();
	void SetPreamble(std::string Preamble);
	std::string GetDestinationAddress();
	void SetDestinationAddress(std::string DestinationAddress);
	std::string GetSourceAddress();
	void SetSourceAddress(std::string SourceAddress);
	std::string GetPayload();
	void SetPayload(std::string Payload);
	std::string GetType();
	void SetType(std::string Type);

	std::string Type;

};