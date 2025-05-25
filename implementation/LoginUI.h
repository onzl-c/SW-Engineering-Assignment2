#ifndef LOGINUI_H
#define LOGINUI_H
#include "Login.h"

class LoginUI {
public:
    Account* requestLogin(Login& login, string id, string pw);
};

#endif