#ifndef LOGINUI_H
#define LOGINUI_H
#include "Login.h"

// User interface class for handling login requests.
class LoginUI {
public:
    // Requests login by passing credentials to Login controller.
    // @param login The Login controller.
    // @param id User ID.
    // @param pw Password.
    // @return Pointer to the logged-in Account.
    Account* requestLogin(Login& login, string id, string pw);
};

#endif