#include <iostream>
using namespace std;

class Employee {
public:
    int Empcode;
    string Empname;
    float Basicsalary;

    Employee(int code, string name, float salary) {
        Empcode = code;
        Empname = name;
        Basicsalary = salary;
    }

    void display() {
        cout << "Employee Code: " << Empcode << endl;
        cout << "Employee Name: " << Empname << endl;
        cout << "Basic Salary: " << Basicsalary << endl;
    }
};

int main() {
    int code;
    string name;
    float salary;

    cout << "Enter Employee Code: ";
    cin >> code;
    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Basic Salary: ";
    cin >> salary;

    Employee emp(code, name, salary);

    cout << "\nEmployee Information:" << endl;
    emp.display();

    return 0;
}

