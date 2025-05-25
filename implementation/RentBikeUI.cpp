#include "RentBikeUI.h"

void RentBikeUI::selectBike(RentBike& rentBike, Account* user, string bikeId) {
    Bike* bike = rentBike.rentalBike(user, bikeId);  // 1.1. rentalBike()
    if (bike != nullptr)
        out_fp << "> " << bike->getId() << " " << bike->getName() << endl << endl;
}