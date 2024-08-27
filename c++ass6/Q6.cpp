#include <iostream>

using namespace std;

class Person {
public:
    virtual void introduce() = 0;
};

class Student : public Person {
public:
    void introduce() {
        cout << "I am a student." << endl;
    }
};

class Teacher : public Person {
public:
    void introduce() {
        cout << "I am a teacher." << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    Person* person1 = &student;
    Person* person2 = &teacher;

    person1->introduce();
    person2->introduce();

    return 0;
}

