#ifndef LOGOUT_H
#define LOGOUT_H
#include "Account.h"

// Handles logout logic.
class Logout {
public:
    // Returns the ID of the account to be logged out.
    // @param currentUser Pointer to the current Account.
    // @return Account ID.
    string performLogout(Account* currentUser);
};
#endif
