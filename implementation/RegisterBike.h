#ifndef REGISTERBIKE_H
#define REGISTERBIKE_H
#include <vector>
#include "Bike.h"

// Handles logic for registering new bikes to the system.
class RegisterBike {
private:
    vector<Bike>& bikes;
public:
    // Constructs a RegisterBike controller with a reference to the bike list.
    RegisterBike(vector<Bike>& bikes);

    // Adds a new bike to the list.
    // @param id The ID of the bike.
    // @param name The name of the bike.
    void addNewBike(string id, string name);
};
#endif