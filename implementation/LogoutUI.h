#ifndef LOGOUTUI_H
#define LOGOUTUI_H
#include "Logout.h"

class LogoutUI {
public:
    void requestLogout(Logout& logout, Account*& currentUser);
};
#endif