#include "Login.h"

Login::Login(vector<Account>& accounts) : accounts(accounts) {}

Account* Login::checkValidateLogin(string id, string pw) {
    for (auto& account : accounts) {
        if (account.getId() == id && account.checkValidateLogin(pw)) { // 1.1.1. checkValidateLogin()
            return &account;
        }
    }
    return nullptr;
}