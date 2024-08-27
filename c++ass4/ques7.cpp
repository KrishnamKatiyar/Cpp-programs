#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    float mileage;
    float price;
public:
    Vehicle(float m, float p) : mileage(m), price(p) {}

    void printVehicleInfo() const {
        cout << "Mileage: " << mileage << " km/l, "
             << "Price: $" << price << endl;
    }
};


class Car : public Vehicle {
protected:
    float ownership_cost;
    int warranty;
    int seating_capacity;
    string fuel_type;
public:
    Car(float m, float p, float oc, int w, int sc, string ft)
        : Vehicle(m, p), ownership_cost(oc), warranty(w), seating_capacity(sc), fuel_type(ft) {}

    void printCarInfo() const {
        printVehicleInfo();
        cout << "Ownership Cost: $" << ownership_cost << ", "
             << "Warranty: " << warranty << " years, "
             << "Seating Capacity: " << seating_capacity << ", "
             << "Fuel Type: " << fuel_type << endl;
    }
};


class Bike : public Vehicle {
protected:
    int cylinders;
    int gears;
    string cooling_type;
    string wheel_type;
    float fuel_tank_size;
public:
    Bike(float m, float p, int c, int g, string ct, string wt, float fts)
        : Vehicle(m, p), cylinders(c), gears(g), cooling_type(ct), wheel_type(wt), fuel_tank_size(fts) {}

    void printBikeInfo() const {
        printVehicleInfo();
        cout << "Cylinders: " << cylinders << ", "
             << "Gears: " << gears << ", "
             << "Cooling Type: " << cooling_type << ", "
             << "Wheel Type: " << wheel_type << ", "
             << "Fuel Tank Size: " << fuel_tank_size << " liters" << endl;
    }
};

class Audi : public Car {
private:
    string model_type;
public:
    Audi(float m, float p, float oc, int w, int sc, string ft, string mt)
        : Car(m, p, oc, w, sc, ft), model_type(mt) {}

    void printAudiInfo() const {
        cout << "Audi " << model_type << ": ";
        printCarInfo();
    }
};


class Ford : public Car {
private:
    string model_type;
public:
    Ford(float m, float p, float oc, int w, int sc, string ft, string mt)
        : Car(m, p, oc, w, sc, ft), model_type(mt) {}

    void printFordInfo() const {
        cout << "Ford " << model_type << ": ";
        printCarInfo();
    }
};


class Bajaj : public Bike {
private:
    string make_type;
public:
    Bajaj(float m, float p, int c, int g, string ct, string wt, float fts, string mt)
        : Bike(m, p, c, g, ct, wt, fts), make_type(mt) {}

    void printBajajInfo() const {
        cout << "Bajaj " << make_type << ": ";
        printBikeInfo();
    }
};


class TVS : public Bike {
private:
    string make_type;
public:
    TVS(float m, float p, int c, int g, string ct, string wt, float fts, string mt)
        : Bike(m, p, c, g, ct, wt, fts), make_type(mt) {}

    void printTVSInfo() const {
        cout << "TVS " << make_type << ": ";
        printBikeInfo();
    }
};

int main() {
    
    Audi myAudi(15.0, 50000, 2000, 5, 5, "Petrol", "A6");
    Ford myFord(18.0, 30000, 1500, 3, 5, "Diesel", "Fiesta");
    Bajaj myBajaj(40.0, 1500, 2, 5, "Air", "Alloys", 13, "Pulsar");
    TVS myTVS(50.0, 1000, 1, 4, "Oil", "Spokes", 12, "Apache");


    myAudi.printAudiInfo();
    myFord.printFordInfo();
    myBajaj.printBajajInfo();
    myTVS.printTVSInfo();

    return 0;
}

