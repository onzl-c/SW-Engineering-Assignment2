#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H
#include "RentBike.h"

// User interface class for handling bike rental requests.
class RentBikeUI {
public:
    // Delegates the bike rental request to the controller.
    // @param rentBike The RentBike controller.
    // @param user The current user.
    // @param bikeId The ID of the bike to rent.
    void selectBike(RentBike& rentBike, Account* user, string bikeId);
};

#endif