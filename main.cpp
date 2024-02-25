/*
Network simulator driver code.
*/

#include <iostream>
#include <string>
#include <vector>

#include "main.h"
#include "Components/Computer.h"


int main()
{
/*
TODO: Simulate a basic network:
	- Network class (nodes, topology)
	- Computer class (IP address, MAC address, hostname)
	- 2 client children of Computer class
	- Server child of Computer class (with table of messages)
	- Switch class to route messages

Basic capability:
	- Server and clients interact appropriately based on network topology.
*/

	// Initiate network as vector of computers
	std::vector<Computer> network;

	// Create two clients and a server
	Computer client1("192.168.69.420", "client1");
	Computer client2("192.168.100.100", "client2");
	Computer server1("192.168.1.1", "server1");

	// Add new computers to network
	network.push_back(client1);
	network.push_back(client2);
	network.push_back(server1);

	// Instantiate adjacency matrix: matrix is of size V x V where V
	// is the number of vertices in the graph.
	int networkSize = network.size();
	int adjMatrix[networkSize][networkSize];

	// Set topology based on global value and implement adjacency matrix accordingly.
	switch (gTopology)
	{
		case BUS:
		{
			std::cout << "Implementing bus network topology.\n";

			// Populate adjacency matrix
			for (int i = 0; i < networkSize; i++)
			{
				for (int j = 0; j < networkSize; j++)
				{
					// For a bus, each index is adjacent to +-1 itself.
					if (j == i - 1 || j == i + 1)
					{
						adjMatrix[i][j] = 1;
					}
				}
			}
			break;
		}

		case RING:
		{
			std::cout << "Implementing ring network topology.\n";

			// Populate adjacency matrix

			break;
		}

		case FULLY_CONNECTED:
		{
			std::cout << "Implementing fully connected network topology.\n";

			// Populate adjacency matrix

			break;
		}

		default:
		{
			std::cout << "[ERROR]: There was a problem creating the network graph.\n";
			break;
		}
	}
}