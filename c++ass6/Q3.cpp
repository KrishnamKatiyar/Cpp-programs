#include <iostream>
#include <vector>

using namespace std;

class Employee {
public:
    virtual double calculateSalary() = 0;
};

class Manager : public Employee {
private:
    double baseSalary;
    double bonus;

public:
    Manager(double baseSalary, double bonus)
        : baseSalary(baseSalary), bonus(bonus) {}

    double calculateSalary()  override {
        return baseSalary + bonus;
    }
};

class Engineer : public Employee {
private:
    double baseSalary;
    int overtimeHours;
    double overtimeRate;

public:
    Engineer(double b, int oH, double oR)
        : baseSalary(b), overtimeHours(oH), overtimeRate(oR) {}

    double calculateSalary() override {
        return baseSalary + (overtimeHours * overtimeRate);
    }
};

int main() {
    Manager manager1(5000.0, 1000.0);
    Engineer engineer1(4000.0, 20, 50.0);

    Employee* emp[2];
    emp[0] = &manager1;
    emp[1] = &engineer1;

    for (int i = 0; i < 2; ++i) {
        cout << "Employee " << i + 1 << " Salary: $" << emp[i]->calculateSalary() << endl;
    }

    return 0;
}

