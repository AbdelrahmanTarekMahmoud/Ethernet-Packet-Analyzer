#include "eCPRI.h"

eCPRI::eCPRI()
{
}

std::string eCPRI::GetConcatenationIndicator()
{
	return std::string();
}

void eCPRI::SetConcatenationIndicator(std::string ConcatenationIndicator)
{
	this->ConcatenationIndicator = ConcatenationIndicator;
}

std::string eCPRI::GetMessageType()
{
	return std::string();
}

void eCPRI::SetMessageType(std::string MessageType)
{
	this->MessageType = MessageType;
}

std::string eCPRI::GetPayloadSize()
{
	return std::string();
}

void eCPRI::SetPayloadSize(std::string PayloadSize)
{
	this->PayloadSize = PayloadSize;
}

std::string eCPRI::GetProtocolVersion()
{
	return std::string();
}

void eCPRI::SetProtocolVersion(std::string ProtocolVersion)
{
	this->ProtocolVersion = ProtocolVersion;
}

std::string eCPRI::GetRTC_ID()
{
	return std::string();
}

void eCPRI::SetRTC_ID(std::string RTC_ID)
{
	this->RTC_ID = RTC_ID;
}

std::string eCPRI::GetSequence_ID()
{
	return std::string();
}

void eCPRI::SetSequence_ID(std::string Sequence_ID)
{
	this->Sequence_ID = Sequence_ID;
}