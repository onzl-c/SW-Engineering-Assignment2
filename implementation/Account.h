#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include "BikeCollection.h"
using namespace std;
#include <fstream>

extern std::ofstream out_fp;

class Account {
private:
    string id;
    string password;
    string phone_num;
    BikeCollection rentalBikeCollection;
public:
    Account(string id, string pw, string phone);
    string getId();
    bool checkValidateLogin(string pw);
    void addListRentalBike(Bike bike);
    void listRentalBike();
};

#endif