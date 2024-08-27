#include <iostream>
#include <string>
using namespace std;

class PERSON {
protected:
    string name;
    string college_name;
public:
    void setPersonDetails(string n, string cn) {
        name = n;
        college_name = cn;
    }

    void printPersonDetails() const {
        cout << "Name: " << name << ", College: " << college_name << endl;
    }
};

class STUDENT : public PERSON {
private:
    string student_id;
    float marks[5];
    float percentage;

public:
    void setStudentDetails(string id, float m[5]) {
        student_id = id;
        for(int i = 0; i < 5; ++i) {
            marks[i] = m[i];
        }
    }

    void showResult() {
        float total = 0;
        for(int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        percentage = total / 5;

        cout << "Student ID: " << student_id << endl;
        printPersonDetails();
        cout << "Total Marks: " << total << ", Percentage: " << percentage << "%" << endl;
        cout << "Class: ";
        if(percentage >= 75) {
            cout << "Distinction" << endl;
        } else if(percentage >= 60) {
            cout << "First Class" << endl;
        } else if(percentage >= 50) {
            cout << "Second Class" << endl;
        } else if(percentage >= 35) {
            cout << "Pass" << endl;
        } else {
            cout << "Fail" << endl;
        }
    }
};

class EMPLOYEE : public PERSON {
private:
    string emp_id;
    string qualification;
    float basic_salary;

public:
    void setEmployeeDetails(string id, string qual, float salary) {
        emp_id = id;
        qualification = qual;
        basic_salary = salary;
    }

    void calculateNetSalary() const {
        float da = 1.89 * basic_salary;
        float hra = 0.1 * basic_salary;
        float ta = 500;
        float income_tax = (basic_salary > 50000) ? 0.05 * basic_salary : 0;

        float net_salary = (basic_salary + da + hra + ta) - income_tax;

        cout << "Employee ID: " << emp_id << endl;
        printPersonDetails();
        cout << "Qualification: " << qualification << ", Basic Salary: $" << basic_salary << endl;
        cout << "Net Salary: $" << net_salary << endl;
    }
};

int main() {
    STUDENT student;
    student.setPersonDetails("krishnam", "GNIOT");
    float marks[5] = {85, 78, 90, 88, 76};
    student.setStudentDetails("S123", marks);
    student.showResult();

    EMPLOYEE employee;
    employee.setPersonDetails("krishna", "GNIOT");
    employee.setEmployeeDetails("E456", "PhD", 60000);
    employee.calculateNetSalary();

    return 0;
}

