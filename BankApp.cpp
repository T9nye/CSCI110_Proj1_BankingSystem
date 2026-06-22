#include "BankApp.h"

using namespace std;

BankApp::BankApp()
{
}
void BankApp::mainMenu()
{
    Customer cust[5];
    string username;
    string password;

    int options1;
    
    while (true)
    {
        cout << "Welcome to California Banking!" << endl;
        cout << "Select an Option: " << endl;
        cout << "1. Login" << endl;
        cout << "2. Exit/Quit" << endl;
        cin >> options1;
        if (options1 == 2)
        {
            cout << "Goodbye!" << endl;
            return;
        }
        else if (options1 == 1)
        {
            cout << "Please enter your username: ";
            cin >> username;
            cout << "Please enter your password: ";
            cin >> password;
            bool access = false;
            utilities.getCustInfoFromFile(cust);
            login(cust, access, username, password);
            utilities.updateFile(cust);
        }
    }
}

	// in your while(true)
	// display your main menu
	// if login is selected - call login()
	// if exit is selected - just return
bool BankApp::login(Customer* parCustomers, bool acc, string user, string pass)
{
    for (int i = 0; i < 5; i++)
    {
        if (user == parCustomers[i].username && pass == parCustomers[i].password)
        {
            cout << "Login Successful" << endl;
            acc = true;
            accountMenu(parCustomers[i], acc);
            return acc;
        }
        else
        {
            cout << "Try Again" << endl;
            return 0;
        }
    }
    return false;
	// compare that to database
	// on successful login - call accountMenu(parCustomer)
	// on failed login - just return
}
void BankApp::accountMenu(Customer& parCustomer,bool parAccess)
{
    {

        int options2;

        while (true)
        {
            cout << "Welcome Mr. " << parCustomer.customerName << endl;

            cout << "Please Select an option below: " << endl;
            cout << "1.  Display balance" << endl;
            cout << "2.  Withdraw funds" << endl;
            cout << "3.  Deposit funds" << endl;
            cout << "4.  Logout" << endl;
            cin >> options2;

            switch (options2)
            {
            case 1:
                parCustomer.display();
                break;
            case 2:
                parCustomer.withdraw();
                break;
            case 3:
                parCustomer.deposit();
                break;
            case 4:
                parAccess = false;
                cout << "Logging out..." << endl;
                return;
            default:
                cout << "Invalid option. Please try again." << endl;
            }
        }
    }
}