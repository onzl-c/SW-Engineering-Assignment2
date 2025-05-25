#ifndef SIGNUP_H
#define SIGNUP_H
#include "Account.h"

// Handles account registration logic.
class SignUp {
private:
    vector<Account>& accounts;
public:
    // Constructs a SignUp controller with reference to the account list.
    SignUp(vector<Account>& accounts);

    // Adds a new account to the system.
    // @param id User ID.
    // @param pw User password.
    // @param phone User phone number.
    void addNewAccount(string id, string pw, string phone);
};
#endif