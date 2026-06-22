#include "Utilities.h"

Utilities::Utilities()
{
}
void Utilities::getCustInfoFromFile(Customer* parCustomers)
{
    ifstream CredentialFile;

    CredentialFile.open("CredentialsData.txt");
    for (int i = 0; i < 5; i++)
    {
        CredentialFile >> parCustomers[i].customerName >> parCustomers[i].accountNum >> parCustomers[i].username >> parCustomers[i].password >> parCustomers[i].balance;
    }
    CredentialFile.close();
}
void Utilities::updateFile(Customer* parCustomers)
{
    ofstream credentialsFile;
    credentialsFile.open("CredentialsData.txt");
    for (int i = 0; i < 5; i++)
    {

        credentialsFile << parCustomers[i].customerName << " "
          << parCustomers[i].accountNum << " "
            << parCustomers[i].username << " "
            << parCustomers[i].password << " "
            << parCustomers[i].balance << " "
            << endl;    
    }
    credentialsFile.close();
}