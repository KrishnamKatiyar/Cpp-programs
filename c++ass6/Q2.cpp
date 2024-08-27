#include <iostream>

using namespace std;

class Animal {
public:
    virtual void sound() = 0;
};


class Dog : public Animal {
public:
    
    void sound() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};


class Cat : public Animal {
public:
    
    void sound() override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

int main() {
   
    Dog dog;
    Cat cat;

    Animal* animal1 = &dog;
    Animal* animal2 = &cat;

    animal1->sound();  
    animal2->sound();  

    return 0;
}

