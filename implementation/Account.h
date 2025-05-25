#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include "BikeCollection.h"
using namespace std;
#include <fstream>

extern std::ofstream out_fp;

// Represents a user account with login credentials and a collection of rented bikes.
class Account {
private:
    string id;
    string password;
    string phone_num;
    BikeCollection rentalBikeCollection;
public:
    // Constructs an Account with ID, password, and phone number.
    Account(string id, string pw, string phone);

    // Returns the account ID.
    string getId();

    // Checks if the given password matches the account password.
    // @param pw The password to validate.
    // @return True if passwords match.
    bool checkValidateLogin(string pw);

    // Adds a bike to the user's rental collection.
    // @param bike The Bike to add.
    void addListRentalBike(Bike bike);

    // Lists all bikes rented by the user.
    void listRentalBike();
};

#endif