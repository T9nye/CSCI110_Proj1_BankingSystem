#include <iostream>
#include <fstream>

using namespace std;


struct Credentials
{
	string username;
	string password;
};

bool login(Credentials parCredentials[], int parSize, string parUser, string parPassword)
{
	for (int i = 0; i < parSize; i++)
	{
		if (parUser == parCredentials[i].username && parPassword == parCredentials[i].password)
		{
			cout << "Login Successful";
			return true;
		}
		else
		{
			cout << "Try Again";
			break;
		}
	}
}

void populate(Credentials creds[], int parSize)
{
	ifstream CredentialFile;
	CredentialFile.open("CredentialsData.txt");
	for (int i = 0; i < 5; i++)
	{
		CredentialFile >> creds[i].username >> creds[i].password;
	}
	CredentialFile.close();

}

int main()
{
	Credentials creds[5];
	populate(creds, 5);
	string username;
	string password;
	int options1;
	int options2;

	cout << "Welcome to mtSac Banking!" << endl;
	cout << "Select an Option: " << endl;
	cout << "1. Login" << endl;
	cout << "2. Exit/Quit" << endl;
	cin >> options1;
	while (true)
		if (options1 == 2)
		{
			break;
		}

		else if (options1 == 1)
		{
			cout << "Please enter your username" << endl;
			cin >> username;
			cout << "Please enter your Password" << endl;
			cin >> password;
			login(creds, 5, username, password);
		}
		else
			break;

	if (login(creds, 5, username, password) == true)
		cout << "Welcome Mr. " << username << endl;
	cout << "Please Select an option below: " << endl;
	cout << "1.  Display balance" << endl;
	cout << "2.  Withdraw funds" << endl;
	cout << "3.  Deposit funds" << endl;
	cout << "4.  Logout " << endl;
		

	return 0;
}