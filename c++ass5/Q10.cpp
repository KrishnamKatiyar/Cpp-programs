#include <iostream>

using namespace std;

class Number {
private:
    double value;

public:
   
    Number(double v = 0) : value(v) {}

 
    Number operator+( Number &n)  {
        return Number(value + n.value);
    }

  
    Number operator-( Number &n)  {
        return Number(value - n.value);
    }

    
    Number operator*( Number &n)  {
        return Number(value * n.value);
    }

    
    Number operator/( Number &n) {
        if (n.value == 0) {
            cout << "Error: Division by zero!" << endl;
            return Number(0);
        }
        return Number(value / n.value);
    }

    
    friend ostream &operator<<(ostream &out,  Number &n) {
        out << n.value;
        return out;
    }

    
    friend istream &operator>>(istream &in, Number &n) {
        in >> n.value;
        return in;
    }
};

int main() {
    Number n1, n2, result;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    
    result = n1 + n2;
    cout << "Sum: " << result << endl;

    result = n1 - n2;
    cout << "Difference: " << result << endl;

    result = n1 * n2;
    cout << "Product: " << result << endl;

    result = n1 / n2;
    cout << "Quotient: " << result << endl;

    return 0;
}

