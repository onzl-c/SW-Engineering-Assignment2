#include "Account.h"

Account::Account(string id, string pw, string phone) : id(id), password(pw), phone_num(phone) {}

string Account::getId() { return id; }

bool Account::checkValidateLogin(string pw) { return password == pw; }

void Account::addListRentalBike(Bike bike) { rentalBikes.push_back(bike); }

void Account::listRentalBike() {
    for (auto &bike : rentalBikes)
        out_fp << bike.getRentalBikeInfo();
    out_fp << endl;
}