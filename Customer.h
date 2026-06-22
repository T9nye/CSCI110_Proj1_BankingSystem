#include <iostream>

using namespace std;

class Customer
{
public:
	Customer();
	string username;
	string password;
	string customerName;
	int accountNum;
	float balance;
	void deposit();
	void withdraw();
	void display();
};
