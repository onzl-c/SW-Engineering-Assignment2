#ifndef BIKECOLLECTION_H
#define BIKECOLLECTION_H
#include <vector>
#include "Bike.h"
using namespace std;

// Manages a collection of bikes rented by an account.
class BikeCollection {
private:
    vector<Bike> bikes;
public:
    // Adds a bike to the collection.
    // @param bike The Bike to be added.
    void add(Bike bike);

    // Lists all bikes in the collection by printing their info.
    void listAll();
};

#endif