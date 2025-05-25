#ifndef RENTALBIKEINFO_H
#define RENTALBIKEINFO_H
#include "Account.h"

// Handles retrieval of rental bike information.
class RentalBikeInfo {
public:
    // Displays all bikes currently rented by the user.
    // @param user Pointer to the account.
    void showRentalBikeInfo(Account* user);
};
#endif