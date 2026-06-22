
#include "Utilities.h"

class BankApp
{
public:
	BankApp();
	Utilities utilities;
	void mainMenu();
private:
	bool login(Customer* parCustomers, bool acc, string user, string pass);
	void accountMenu(Customer& parCustomer, bool parAccess);
};