#ifndef BIKE_H
#define BIKE_H
#include <string>
using namespace std;

class Bike {
private:
    string id;
    string name;
    bool rented;

public:
    Bike(string id, string name);
    string getId(); 
    string getName(); 
    void updateStatus(bool isRented);
    bool isRented();
    string getRentalBikeInfo();
};

#endif