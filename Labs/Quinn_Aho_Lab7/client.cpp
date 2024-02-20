#include "client.h"
#include <iostream>
#include <string> 

using namespace std;

Client::Client() : username(""), checkingBalance(0.0), savingsBalance(0.0) {}

Client::Client(string u, float cb, float sb) : username(u), checkingBalance(cb), savingsBalance(sb) {}


void Client::setUsername(const string &name)
{
    username = name;
}

string Client::getUsername() const
{
    return username;
}

void Client::setCheckingBalance(float cb)
{
    checkingBalance = cb;
}

float Client::getCheckingBalance() const
{
    return checkingBalance;
}

void Client::setSavingsBalance(float sb)
{
    savingsBalance = sb;
}

float Client::getSavingsBalance() const
{
    return savingsBalance;
}

