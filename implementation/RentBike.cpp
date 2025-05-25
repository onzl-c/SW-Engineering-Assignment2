#include "RentBike.h"

RentBike::RentBike(vector<Bike>& bikes) : bikes(bikes) {}

Bike* RentBike::rentalBike(Account* user, string bikeId) {
    for (auto& bike : bikes) {
        if (bike.getId() == bikeId && !bike.isRented()) {
            bike.updateStatus(true);               // 1.1.1. updateStatus()
            user->addListRentalBike(bike);         // 1.1.2. addListRentalBike()
            return &bike;
        }
    }
    return nullptr;
}