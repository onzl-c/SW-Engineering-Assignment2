#include "SignUp.h"

SignUp::SignUp(vector<Account>& accounts) : accounts(accounts) {}

void SignUp::addNewAccount(string id, string pw, string phone) {
    accounts.emplace_back(id, pw, phone);  // 1.1.1. Account() 생성자 호출
}