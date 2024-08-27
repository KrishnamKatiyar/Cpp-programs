#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(){}

    Distance(int f, int in) : feet(f), inches(in) {}

    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    Distance operator+(const Distance &d) {
        Distance temp;
        temp.inches = inches + d.inches;
        temp.feet = feet + d.feet;

        if (temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }

        return temp;
    }
};

int main() {
    Distance d1(5, 8);  
    Distance d2(3, 10); 


    Distance d3 = d1 + d2;

    cout << "Distance 1: ";
    d1.display();
    
    cout << "Distance 2: ";
    d2.display();

    cout << "Total Distance: ";
    d3.display();

    return 0;
}

