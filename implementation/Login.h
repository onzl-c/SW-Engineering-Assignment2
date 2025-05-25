#ifndef LOGIN_H
#define LOGIN_H
#include "Account.h"

// Handles login logic using a list of accounts.
class Login {
private:
    vector<Account>& accounts;
public:
    // Constructs a Login controller with reference to the account list.
    Login(vector<Account>& accounts);

    // Validates login credentials.
    // @param id User ID.
    // @param pw Password.
    // @return Pointer to the matching Account or nullptr.
    Account* checkValidateLogin(string id, string pw);
};

#endif