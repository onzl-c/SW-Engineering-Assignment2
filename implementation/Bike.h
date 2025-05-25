#ifndef BIKE_H
#define BIKE_H
#include <string>
using namespace std;

// Represents a rentable bike with an ID, name, and rental status.
class Bike {
private:
    string id;
    string name;
    bool rented;

public:
    // Constructs a new Bike with the given ID and name. Initially unrented.
    Bike(string id, string name);

    // Returns the ID of the bike.
    string getId(); 

    // Returns the name of the bike.
    string getName(); 

    // Updates the rental status of the bike.
    // @param isRented True if the bike is now rented, false otherwise.
    void updateStatus(bool isRented);

    // Returns whether the bike is currently rented.
    bool isRented();

    // Returns a formatted string representing bike information.
    // @return "> id name\n"
    string getRentalBikeInfo();
};

#endif