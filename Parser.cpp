#include "Parser.h"
using namespace std;

Parser::Parser(std::vector<std::string> input)
{
	Input = input;
	NumberOfPackets = Input.size();
}

void Parser::Parse()
{
	for (int i = 0; i < Input.size(); i++)
	{
		std::string Packet = Input[i];
		Type = GetType(Packet);
		int indexOfThePacket = i;
		if (Type == eCPRI_Type)
		{
			Parse_eCPRI(Packet, indexOfThePacket);
		}
		else if (Type == RawEhternetFrame_Type)
		{
			Parse_RawEthernetFrames(Packet, indexOfThePacket);
		}
	}
}

std::string Parser::GetType(std::string Packet)
{
	std::string TempString;
	for (int i = 0; i < TypeIndecies.size(); i++)
	{
		TempString += Packet[TypeIndecies[i]];
	}
	if (TempString == "AEFE" || TempString == "88F7")
	{
		return TempString;
	}
	else
	{
		return TempString;
	}
}

void Parser::Parse_RawEthernetFrames(std::string Packet, int indexOfThePacket)
{
	RawEhternetFrame r;
	// parsing CRc
	std::string CRC;
	int last_Packet_Index = Packet.length();

	for (int i = last_Packet_Index - CRC_bits; i < last_Packet_Index; i++)
	{
		CRC += Packet[i];
	}
	// parsing Destination Address
	std::string Destination_Address;
	for (int i = Destination_Address_index; i < (Destination_Address_bits + Destination_Address_index); i++)
	{
		Destination_Address += Packet[i];
	}
	// parsing Destination Address
	std::string Source_Address;
	for (int i = Source_Address_index; i < (Source_Address_bits + Source_Address_index); i++)
	{
		Source_Address += Packet[i];
	}
	r.SetCRC(CRC);
	r.SetSourceAddress(Source_Address);
	r.SetDestinationAddress(Destination_Address);
	r.SetType(Type);
	printer.PrintRawEthernetFrame(r, indexOfThePacket, Packet, "Output.txt");

}

void Parser::Parse_eCPRI(std::string Packet, int indexOfThePacket)
{
	eCPRI e;
	std::string CRC;
	int last_Packet_Index = Packet.length();

	for (int i = last_Packet_Index - CRC_bits; i < last_Packet_Index; i++)
	{
		CRC += Packet[i];
	}
	// parsing Destination Address
	std::string Destination_Address;
	for (int i = Destination_Address_index; i < (Destination_Address_bits + Destination_Address_index); i++)
	{
		Destination_Address += Packet[i];
	}
	// parsing Destination Address
	std::string Source_Address;
	for (int i = Source_Address_index; i < (Source_Address_bits + Source_Address_index); i++)
	{
		Source_Address += Packet[i];
	}

	char ProtocolVersion = Packet[Protocol_Version_Index];
	char ConcatenationIndicator = Packet[Concatenation_Indicator_Index];
	std::string MessageType = std::string(1, Packet[MessageTypeIndex]) + std::string(1, Packet[MessageTypeIndex + 1]);

	std::string PayloadSize;
	for (int i = Payload_index; i < (PayloadSize_bits + Payload_index); i++)
	{
		PayloadSize += Packet[i];
	}
	std::string RTC_ID;
	for (int i = RTC_ID_index; i < (RTC_IDSize_bits + RTC_ID_index); i++)
	{
		RTC_ID += Packet[i];
	}
	std::string Sequence_ID;
	for (int i = Sequence_ID_index; i < (Sequence_ID_bits + Sequence_ID_index); i++)
	{
		Sequence_ID += Packet[i];
	}

	e.SetCRC(CRC);
	e.SetSourceAddress(Source_Address);
	e.SetDestinationAddress(Destination_Address);
	e.SetType(Type);
	e.SetProtocolVersion(ProtocolVersion);
	e.SetConcatenationIndicator(ConcatenationIndicator);
	e.SetMessageType(MessageType);
	e.SetPayloadSize(PayloadSize);
	e.SetRTC_ID(RTC_ID);
	e.SetSequence_ID(Sequence_ID);

	printer.PrinteCPRI(e, indexOfThePacket, Packet, "Output.txt");


}
