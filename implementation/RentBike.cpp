#include "RentBike.h"

RentBike::RentBike(vector<Bike>& bikes) : bikes(bikes) {}

Bike* RentBike::rentalBike(Account* user, string bikeId) {
    for (auto& bike : bikes) {
        if (bike.getId() == bikeId && !bike.isRented()) {
            bike.updateStatus(true);           
            user->addListRentalBike(bike);        
            return &bike;
        }
    }
    return nullptr;
}