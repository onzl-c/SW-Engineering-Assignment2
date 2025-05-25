#ifndef RENTBIKEUI_H
#define RENTBIKEUI_H
#include "RentBike.h"

class RentBikeUI {
public:
    void selectBike(RentBike& rentBike, Account* user, string bikeId);
};

#endif