#ifndef REGISTERBIKE_H
#define REGISTERBIKE_H
#include <vector>
#include "Bike.h"

class RegisterBike {
private:
    vector<Bike>& bikes;
public:
    RegisterBike(vector<Bike>& bikes);
    void addNewBike(string id, string name);
};
#endif