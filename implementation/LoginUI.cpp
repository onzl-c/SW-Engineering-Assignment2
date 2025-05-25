#include "LoginUI.h"

Account* LoginUI::requestLogin(Login& login, string id, string pw) {
    out_fp << "> " << id << " " << pw << endl << endl;
    return login.checkValidateLogin(id, pw); // 1.1. checkValidateLogin()
}