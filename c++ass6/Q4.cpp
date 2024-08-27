#include <iostream>
#include <vector>

using namespace std;

class Vehicle {
public:
    virtual void describe() = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void describe() {
        cout << "This is a Car." << endl;
    }
};

class Bike : public Vehicle {
public:
    void describe() {
        cout << "This is a Bike." << endl;
    }
};

int main() {
    Car car;
    Bike bike;

    vector<Vehicle*> vehicles;
    vehicles.push_back(&car);
    vehicles.push_back(&bike);

    for (size_t i = 0; i < vehicles.size(); ++i) {
        vehicles[i]->describe();
    }

    return 0;
}

