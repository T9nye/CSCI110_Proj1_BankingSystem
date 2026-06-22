#include "Customer.h"

#include <fstream>

using namespace std;

class Utilities
{
public:
	Utilities();
	ofstream fileOutStream;
	ifstream fileInStream;
	void getCustInfoFromFile(Customer* parCustomers);
	void updateFile(Customer* parCustomers);
};
