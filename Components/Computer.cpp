/*
Computer class to mimic a generic computer.
Can be used as a host or a client.
*/

#include "Computer.h"

// Constructor
Computer::Computer(std::string ip, std::string name)
{
   ipAddress = ip;
   hostName  = name;
}
