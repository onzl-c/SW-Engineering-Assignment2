#include "LogoutUI.h"

void LogoutUI::requestLogout(Logout& logout, Account*& currentUser) {
    out_fp << "> ";
    out_fp << logout.performLogout(currentUser);
    out_fp << "\n" << endl;
    currentUser = nullptr;
}