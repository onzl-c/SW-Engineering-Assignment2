#ifndef REGISTBIKEUI_H
#define REGISTBIKEUI_H
#include "RegisterBike.h"
#include <fstream>

extern std::ofstream out_fp;

// User interface class for handling bike registration.
class RegistBikeUI {
public:
    // Delegates the bike registration request to the controller.
    // @param reg The RegisterBike controller.
    // @param id The bike ID.
    // @param name The bike name.
    void requestBike(RegisterBike& reg, string id, string name);
};

#endif