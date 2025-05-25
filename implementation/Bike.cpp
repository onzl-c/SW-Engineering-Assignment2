#include "Bike.h"

Bike::Bike(string id, string name) : id(id), name(name), rented(false) {}

string Bike::getId() { return id; }

string Bike::getName() { return name; }

void Bike::updateStatus(bool isRented) {
    rented = isRented;
}

bool Bike::isRented() { return rented; }

string Bike::getRentalBikeInfo() {
    return "> " + id + " " + name + "\n";
}