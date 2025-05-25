#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <vector>
#include <fstream>
#include "Bike.h"

using namespace std;
extern ofstream out_fp;

class Account {
private:
    string id;
    string password;
    string phone_num;
    vector<Bike> rentalBikes;
public:
    Account(string id, string pw, string phone);
    string getId();
    bool checkValidateLogin(string pw);
    void addListRentalBike(Bike bike);
    void listRentalBike();
};

#endif