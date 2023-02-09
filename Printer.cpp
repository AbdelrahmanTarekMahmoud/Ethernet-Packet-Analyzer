#include "Printer.h"

void Printer::PrintRawEthernetFrame(RawEhternetFrame RawObject, int indexOfThePacket, std::string Packet, std::string Path)
{
	std::ofstream MyFile;
	MyFile.open(Path, std::ofstream::app);
	MyFile << "Packet #" << " " << indexOfThePacket << ":" << std::endl;
	MyFile << Packet << std::endl;
	MyFile << "CRC : " << RawObject.GetCRC() << std::endl;
	MyFile << "Destination Address : " << RawObject.GetDestinationAddress() << std::endl;
	MyFile << "Source Address : " << RawObject.GetSourceAddress() << std::endl;
	MyFile << "Type:   " << RawObject.GetType() << std::endl;
	MyFile << "*******************************************************************************" << std::endl;

}

void Printer::PrinteCPRI(eCPRI EnhancedObject, int indexOfThePacket, std::string Packet, std::string Path)
{
	std::ofstream MyFile;
	MyFile.open(Path, std::ofstream::app);
	MyFile << "Packet #" << "  " << indexOfThePacket << ":" << std::endl;
	MyFile << Packet << std::endl;
	MyFile << "CRC : " << EnhancedObject.GetCRC() << std::endl;
	MyFile << "Destination Address : " << EnhancedObject.GetDestinationAddress() << std::endl;
	MyFile << "Source Address : " << EnhancedObject.GetSourceAddress() << std::endl;
	MyFile << "Type:   " << EnhancedObject.GetType() << std::endl;
	MyFile << "ConcatenationIndicator:   " << EnhancedObject.GetConcatenationIndicator() << std::endl;
	MyFile << "MessageType:   " << EnhancedObject.GetMessageType() << std::endl;
	MyFile << "ProtocolVersion:   " << EnhancedObject.GetProtocolVersion() << std::endl;
	MyFile << "PayloadSize:   " << EnhancedObject.GetPayloadSize() << std::endl;
	MyFile << "RTC_ID:   " << EnhancedObject.GetRTC_ID() << std::endl;
	MyFile << "Sequence_ID:   " << EnhancedObject.GetSequence_ID() << std::endl;
	MyFile << "*******************************************************************************" << std::endl;
}
