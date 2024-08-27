#include <iostream>
using namespace std;

class Base {
public:
    int i;

    void printNum() {
        cout << "Value of i: " << i << endl;
    }
};

class Subclass : public Base {
public:
    int j;

    void printNum() {
        cout << "Value of j: " << j << endl;
    }
};

int main() {
    Subclass obj;
    obj.i = 10;
    obj.j = 20;

    obj.printNum();        // Calls Subclass printNum()
    obj.Base::printNum();  // Calls Base printNum()

    return 0;
}

