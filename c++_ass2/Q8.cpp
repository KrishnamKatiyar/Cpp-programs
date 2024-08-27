#include <iostream>
using namespace std;

class Employee {
private:
    int empcode;
    float basicsalary;
    float netsalary;

public:
    void getEmployeeInfo() {
        cout << "Enter Employee Code: ";
        cin >> empcode;
        cout << "Enter Basic Salary: ";
        cin >> basicsalary;
    }

    void calculateNetSalary() {
        float DA = 1.74 * basicsalary; // 174% of Basic salary
        float HRA = 0.10 * basicsalary; // 10% of Basic salary
        float TA = 500; // Fixed amount
        float income_tax = 0;

        if (basicsalary > 50000) {
            income_tax = 0.05 * basicsalary; // 5% of Basic salary if > 50000
        } else {
            income_tax = 0; // No income tax if <= 50000
        }

        netsalary = (basicsalary + DA + HRA + TA) - income_tax;
    }

    void displayEmployeeInfo() {
        cout << "\nEmployee Information:" << endl;
        cout << "Employee Code: " << empcode << endl;
        cout << "Basic Salary: " << basicsalary << endl;
        cout << "Net Salary: " << netsalary << endl;
    }
};

int main() {
    Employee emp;
    emp.getEmployeeInfo();
    emp.calculateNetSalary();
    emp.displayEmployeeInfo();
    return 0;
}

