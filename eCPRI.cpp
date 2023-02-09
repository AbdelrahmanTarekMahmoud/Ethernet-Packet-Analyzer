#include "eCPRI.h"

eCPRI::eCPRI()
{
}

char eCPRI::GetConcatenationIndicator()
{
	return  ConcatenationIndicator;
}

void eCPRI::SetConcatenationIndicator(char ConcatenationIndicator)
{
	this->ConcatenationIndicator = ConcatenationIndicator;
}

std::string eCPRI::GetMessageType()
{
	return MessageType;
}

void eCPRI::SetMessageType(std::string MessageType)
{
	this->MessageType = MessageType;
}

std::string eCPRI::GetPayloadSize()
{
	return PayloadSize;
}

void eCPRI::SetPayloadSize(std::string PayloadSize)
{
	this->PayloadSize = PayloadSize;
}

char eCPRI::GetProtocolVersion()
{
	return ProtocolVersion;
}

void eCPRI::SetProtocolVersion(char ProtocolVersion)
{
	this->ProtocolVersion = ProtocolVersion;
}

std::string eCPRI::GetRTC_ID()
{
	return RTC_ID;
}

void eCPRI::SetRTC_ID(std::string RTC_ID)
{
	this->RTC_ID = RTC_ID;
}

std::string eCPRI::GetSequence_ID()
{
	return Sequence_ID;
}

void eCPRI::SetSequence_ID(std::string Sequence_ID)
{
	this->Sequence_ID = Sequence_ID;
}