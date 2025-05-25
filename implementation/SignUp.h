#ifndef SIGNUP_H
#define SIGNUP_H
#include "Account.h"

class SignUp {
private:
    vector<Account>& accounts;
public:
    SignUp(vector<Account>& accounts);
    void addNewAccount(string id, string pw, string phone);
};
#endif