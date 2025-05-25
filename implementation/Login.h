#ifndef LOGIN_H
#define LOGIN_H
#include "Account.h"

class Login {
private:
    vector<Account>& accounts;
public:
    Login(vector<Account>& accounts);
    Account* checkValidateLogin(string id, string pw);
};

#endif