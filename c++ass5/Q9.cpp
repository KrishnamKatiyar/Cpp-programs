#include <iostream>

using namespace std;

class Boolean {
private:
    bool value;

public:
    Boolean(bool val) : value(val) {}

    bool operator!() const {
        return !value;
    }

    void display() const {
        cout << "Boolean value: " << (value ? "True" : "False") << endl;
    }
};

int main() {
    Boolean b1(true);
    Boolean b2(false);

    cout << "Original Values:" << endl;
    b1.display();
    b2.display();

    cout << "\nAfter applying ! operator:" << endl;
    cout << "!b1 = " << (!b1 ? "True" : "False") << endl;
    cout << "!b2 = " << (!b2 ? "True" : "False") << endl;

    return 0;
}

