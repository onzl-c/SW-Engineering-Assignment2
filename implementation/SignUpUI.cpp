#include "SignUpUI.h"

void SignUpUI::createNewAccount(SignUp& signUp, string id, string pw, string phone) {
    out_fp << "> " << id << " " << pw << " " << phone << endl << endl;
    signUp.addNewAccount(id, pw, phone);  // 1.1. addNewAccount()
}