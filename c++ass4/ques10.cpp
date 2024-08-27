#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Marks {
protected:
    int roll_number;
    string name;
    float total_marks;
public:
    Marks(int rn, string n) : roll_number(rn), name(n), total_marks(0) {}

    virtual void inputMarks() = 0;  // Pure virtual function for inputting marks
    virtual void calculateTotal() = 0;  // Pure virtual function for calculating total marks

    int getRollNumber() const {
        return roll_number;
    }

    string getName() const {
        return name;
    }

    float getTotalMarks() const {
        return total_marks;
    }
};

class Physics : virtual public Marks {
protected:
    float physics_marks;
public:
    Physics(int rn, string n) : Marks(rn, n), physics_marks(0) {}

    void inputMarks() override {
        cout << "Enter Physics marks for roll number " << roll_number << ": ";
        cin >> physics_marks;
    }

    void calculateTotal() override {
        total_marks += physics_marks;
    }
};

class Chemistry : virtual public Marks {
protected:
    float chemistry_marks;
public:
    Chemistry(int rn, string n) : Marks(rn, n), chemistry_marks(0) {}

    void inputMarks() override {
        cout << "Enter Chemistry marks for roll number " << roll_number << ": ";
        cin >> chemistry_marks;
    }

    void calculateTotal() override {
        total_marks += chemistry_marks;
    }
};

class Mathematics : virtual public Marks {
protected:
    float mathematics_marks;
public:
    Mathematics(int rn, string n) : Marks(rn, n), mathematics_marks(0) {}

    void inputMarks() override {
        cout << "Enter Mathematics marks for roll number " << roll_number << ": ";
        cin >> mathematics_marks;
    }

    void calculateTotal() override {
        total_marks += mathematics_marks;
    }
};

class Student : public Physics, public Chemistry, public Mathematics {
public:
    Student(int rn, string n) : Marks(rn, n), Physics(rn, n), Chemistry(rn, n), Mathematics(rn, n) {}

    void inputMarks() override {
        Physics::inputMarks();
        Chemistry::inputMarks();
        Mathematics::inputMarks();
    }

    void calculateTotal() override {
        Physics::calculateTotal();
        Chemistry::calculateTotal();
        Mathematics::calculateTotal();
    }
};

int main() {
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    vector<Student> students;
    int roll_number = 1;

    for (int i = 0; i < num_students; ++i) {
        string name;
        cout << "Enter name of student " << roll_number << ": ";
        cin >> name;

        Student student(roll_number, name);
        student.inputMarks();
        student.calculateTotal();
        students.push_back(student);

        ++roll_number;
    }

    float total_class_marks = 0;

    cout << fixed << setprecision(2);
    cout << "\nStudent Report:\n";
    for (size_t i = 0; i < students.size(); ++i) {
        cout << "Roll Number: " << students[i].getRollNumber()
             << ", Name: " << students[i].getName()
             << ", Total Marks: " << students[i].getTotalMarks() << endl;
        total_class_marks += students[i].getTotalMarks();
    }

    float average_marks = total_class_marks / num_students;
    cout << "\nAverage Marks of the Class: " << average_marks << endl;

    return 0;
}

