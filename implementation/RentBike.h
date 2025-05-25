#ifndef RENTBIKE_H
#define RENTBIKE_H
#include "Account.h"

class RentBike {
private:
    vector<Bike>& bikes;
public:
    RentBike(vector<Bike>& bikes);
    Bike* rentalBike(Account* user, string bikeId);
};

#endif