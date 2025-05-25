#ifndef RENTALBIKEINFOUI_H
#define RENTALBIKEINFOUI_H
#include "RentalBikeInfo.h"

// User interface class for showing rental bike information.
class RentalBikeInfoUI {
public:
    // Requests the rental bike list from the controller.
    // @param info The RentalBikeInfo controller.
    // @param user The current user.
    void requestRentalBikeInfo(RentalBikeInfo& info, Account* user);
};

#endif