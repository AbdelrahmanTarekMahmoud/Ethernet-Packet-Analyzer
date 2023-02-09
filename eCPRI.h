#include "RawEthernetFrame.h"
#pragma once

class eCPRI : public RawEhternetFrame
{
private:
	char ConcatenationIndicator;
	std::string MessageType;
	std::string PayloadSize;
	char ProtocolVersion;
	std::string RTC_ID;
	std::string Sequence_ID;
public:
	eCPRI();
	char GetConcatenationIndicator();
	void SetConcatenationIndicator(char ConcatenationIndicator);
	std::string GetMessageType();
	void SetMessageType(std::string MessageType);
	std::string GetPayloadSize();
	void SetPayloadSize(std::string PayloadSize);
	char GetProtocolVersion();
	void SetProtocolVersion(char ProtocolVersion);
	std::string GetRTC_ID();
	void SetRTC_ID(std::string RTC_ID);
	std::string GetSequence_ID();
	void SetSequence_ID(std::string Sequence_ID);
};