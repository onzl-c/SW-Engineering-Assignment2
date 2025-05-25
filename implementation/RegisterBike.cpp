#include "RegisterBike.h"

RegisterBike::RegisterBike(vector<Bike>& bikes) : bikes(bikes) {}

void RegisterBike::addNewBike(string id, string name) {
    bikes.emplace_back(id, name);  // 1.1.1. Bike() 생성자 호출
}