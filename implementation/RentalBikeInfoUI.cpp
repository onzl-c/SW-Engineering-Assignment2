#include "RentalBikeInfoUI.h"

void RentalBikeInfoUI::requestRentalBikeInfo(RentalBikeInfo& info, Account* user) {
    info.showRentalBikeInfo(user);  
}