#include <iostream>

using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base destructor called." << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived destructor called." << endl;
    }
};

int main() {
    Base* basePtr = new Derived();
    
    delete basePtr;    //until we don't delete this dynamic object , destructor will not be called

    return 0;
}

