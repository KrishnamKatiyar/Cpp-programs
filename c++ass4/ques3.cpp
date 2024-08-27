#include <iostream>
#include <string>

using namespace std;

class Teacher {
protected:
    string name;
    string department;
    string college_name;
    string email_id;

public:
    Teacher(string n, string dept, string college, string email) 
        : name(n), department(dept), college_name(college), email_id(email) {}

    
};

class MathTeacher : public Teacher {
private:
    string qualification;
    string expertise;
    double salary;

public:
    MathTeacher(string n, string dept, string college, string email, string qual, string exp, double sal)
        : Teacher(n, dept, college, email), qualification(qual), expertise(exp), salary(sal) {}

    void display_info()  {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "College name: " << college_name << endl;
        cout << "Email id: " << email_id << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << endl;
        cout << "Salary: " << salary << endl;
    }
};

class EnglishTeacher : public Teacher {
private:
    string qualification;
    string expertise;
    double salary;

public:
    EnglishTeacher(string n, string dept, string college, string email, string qual, string exp, double sal)
        : Teacher(n, dept, college, email), qualification(qual), expertise(exp), salary(sal) {}

    void display_info()  {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "College name: " << college_name << endl;
        cout << "Email id: " << email_id << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << endl;
        cout << "Salary: " << salary << endl;
    }
};

class ScienceTeacher : public Teacher {
private:
    string qualification;
    string expertise;
    double salary;

public:
    ScienceTeacher(string n, string dept, string college, string email, string qual, string exp, double sal)
        : Teacher(n, dept, college, email), qualification(qual), expertise(exp), salary(sal) {}

    void display_info()  {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "College name: " << college_name << endl;
        cout << "Email id: " << email_id << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    MathTeacher math_teacher("Harsh", "Mathematics", "GNIOT College", "harsh@GNIOT.edu", "PhD", "Algebra", 55000);
    EnglishTeacher english_teacher("Sahil", "English", "GNIOT College", "sahil@GNIOT.edu", "MA", "Literature", 50000);
    ScienceTeacher science_teacher("Naman", "Science", "GNIOT College", "naman@GNIOT.edu", "PhD", "Physics", 60000);

    math_teacher.display_info();
    cout << endl;
    english_teacher.display_info();
    cout << endl;
    science_teacher.display_info();

    return 0;
}

