#ifndef LOGOUTUI_H
#define LOGOUTUI_H
#include "Logout.h"

// User interface class for handling logout requests.
class LogoutUI {
public:
    // Delegates the logout request to the Logout controller.
    // @param logout The Logout controller.
    // @param currentUser Pointer to the current user Account.
    void requestLogout(Logout& logout, Account*& currentUser);
};
#endif