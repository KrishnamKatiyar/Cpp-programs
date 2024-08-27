#include <iostream>

using namespace std;

template <typename T>
class Storage {
public:
    virtual void store(T& value) = 0;
};

class IntStorage : public Storage<int> {
private:
    int data;
public:
    void store(int& value) {
        data = value;
        cout << "Stored integer: " << data << endl;
    }
};

void demonstrate(Storage<int>* storage, int value) {
    storage->store(value);
}

int main() {
    IntStorage i;

    demonstrate(&i, 42);

    return 0;
}

