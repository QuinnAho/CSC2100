#pragma once

#include <iostream>
using namespace std;

class Client {
private:
    string username;
    float checkingBalance;
    float savingsBalance;

public:
    Client();
    Client(string u, float cb, float sb);

    void setUsername(const string& name);
    string getUsername() const;

    void setCheckingBalance(float cb);
    float getCheckingBalance() const;

    void setSavingsBalance(float sb);
    float getSavingsBalance() const;
};
