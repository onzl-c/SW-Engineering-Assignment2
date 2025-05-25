#include "BikeCollection.h"
#include <fstream>
extern ofstream out_fp;

void BikeCollection::add(Bike bike) {
    bikes.push_back(bike);
}

void BikeCollection::listAll() {
    for (auto& bike : bikes) {
        out_fp << bike.getRentalBikeInfo();
    }
    out_fp << endl;
}