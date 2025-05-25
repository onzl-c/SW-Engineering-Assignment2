#ifndef REGISTBIKEUI_H
#define REGISTBIKEUI_H
#include "RegisterBike.h"
#include <fstream>

extern std::ofstream out_fp;

class RegistBikeUI {
public:
    void requestBike(RegisterBike& reg, string id, string name);
};

#endif