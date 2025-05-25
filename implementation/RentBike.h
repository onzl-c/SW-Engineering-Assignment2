#ifndef RENTBIKE_H
#define RENTBIKE_H
#include "Account.h"

// Handles bike rental logic.
class RentBike {
private:
    vector<Bike>& bikes;
public:
    // Constructs a RentBike controller with a reference to the bike list.
    RentBike(vector<Bike>& bikes);

    // Processes a bike rental request.
    // @param user The account renting the bike.
    // @param bikeId The ID of the bike to rent.
    // @return Pointer to the rented Bike or nullptr.
    Bike* rentalBike(Account* user, string bikeId);
};

#endif