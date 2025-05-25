#include "RegistBikeUI.h"

void RegistBikeUI::requestBike(RegisterBike& reg, string id, string name) {
    out_fp << "> " << id << " " << name << endl << endl;
    reg.addNewBike(id, name); 
}
