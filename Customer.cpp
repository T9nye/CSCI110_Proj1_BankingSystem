#include "Customer.h"

#include <iostream>

using namespace std;
Customer::Customer()
{
	
}
void Customer::deposit()
{
	cout << "Please Enter the amount you would like to deposit" << endl;
	float depositAmount;
	cin >> depositAmount;
	balance = balance + depositAmount;

	cout << "Deposited $" << depositAmount << endl;
	cout << "Your updated balance is $" << balance << endl;
}
void Customer::withdraw()
{
	cout << "Please Enter the amount you would like to deposit" << endl;
	float withdrawAmount;
	cin >> withdrawAmount;
	balance = balance - withdrawAmount;
	cout << "Withdrew $" << withdrawAmount << endl;
	cout << "Your updated balance is $" << balance << endl;
	
}
void Customer::display()
{
	cout << "Hi " << customerName << endl;
	cout << "Account number: " << accountNum << endl;
	cout << "Your Current Balance is " << balance << endl;;

}