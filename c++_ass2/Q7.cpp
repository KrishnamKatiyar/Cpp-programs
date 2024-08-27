#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int student_id;
    string name;
    string branch;
    float sub1_mark, sub2_mark, sub3_mark, sub4_mark, sub5_mark;
    float percentage;
    string student_class;

public:
    void getDetails() {
        cout << "Enter Student ID: ";
        cin >> student_id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Branch: ";
        getline(cin, branch);
        cout << "Enter marks for 5 subjects: ";
        cin >> sub1_mark >> sub2_mark >> sub3_mark >> sub4_mark >> sub5_mark;
    }

    void calculatePercentage() {
        float total_marks = sub1_mark + sub2_mark + sub3_mark + sub4_mark + sub5_mark;
        percentage = (total_marks / 500) * 100;
    }

    void determineClass() {
        if (percentage >= 75) {
            student_class = "Distinction";
        } else if (percentage >= 60) {
            student_class = "First Class";
        } else if (percentage >= 50) {
            student_class = "Second Class";
        } else if (percentage >= 35) {
            student_class = "Pass";
        } else {
            student_class = "Fail";
        }
    }

    void printDetails() {
        cout << "Student ID: " << student_id << endl;
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Marks: " << sub1_mark << ", " << sub2_mark << ", " << sub3_mark << ", " << sub4_mark << ", " << sub5_mark << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Class: " << student_class << endl;
    }
};

int main() {
    Student student;
    student.getDetails();
    student.calculatePercentage();
    student.determineClass();
    student.printDetails();

    return 0;
}

