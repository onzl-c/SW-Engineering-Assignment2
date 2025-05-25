#include "RentBikeUI.h"

void RentBikeUI::selectBike(RentBike& rentBike, Account* user, string bikeId) {
    Bike* bike = rentBike.rentalBike(user, bikeId); 
    if (bike != nullptr)
        out_fp << "> " << bike->getId() << " " << bike->getName() << endl << endl;
}