#include "client.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Lab 08!" << endl;
    cout << "------------" << endl;

    Client client;
    Client *ptr1 = &client;
    Client *ptr2 = &client;

    string name;
    float checkingBalance, savingsBalance;

    cout << "Enter client's name: ";
    cin >> name;
    ptr1->setUsername(name);

    cout << "Enter initial checking balance: ";
    cin >> checkingBalance;
    ptr1->setCheckingBalance(checkingBalance);

    cout << "Enter initial savings balance: ";
    cin >> savingsBalance;
    ptr1->setSavingsBalance(savingsBalance);

    cout << "Client's name: " << ptr2->getUsername() << endl;
    cout << "Checking balance: " << ptr2->getCheckingBalance() << endl;
    cout << "Savings balance: " << ptr2->getSavingsBalance() << endl;

    return 0;
}

