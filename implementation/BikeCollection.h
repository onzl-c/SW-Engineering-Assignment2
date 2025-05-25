#ifndef BIKECOLLECTION_H
#define BIKECOLLECTION_H
#include <vector>
#include "Bike.h"
using namespace std;

class BikeCollection {
private:
    vector<Bike> bikes;
public:
    void add(Bike bike);
    void listAll();
};

#endif