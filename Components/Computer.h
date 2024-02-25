/*
Computer header file.
*/
#include <string>

class Computer
{
   private:
      // Members
      const std::string macAddress;

   public:
      // Members
      std::string ipAddress;
      std::string hostName;

      // Constructor
      Computer(std::string ip, std::string name);
};