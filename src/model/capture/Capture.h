#pragma once

#include <list>
#include "../camera/Packet.h"

class Capture
{
public:
	Capture();
	void addPacket(Packet* packet);
	std::list<Packet*> getPackets();
private:
	std::list<Packet*> packets;
};
