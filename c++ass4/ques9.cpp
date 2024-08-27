#include <iostream>
#include <string>
using namespace std;

class RBI {
protected:
    float min_interest_rate;
    float min_balance;
    float max_withdrawal_limit;
public:
    RBI() : min_interest_rate(4.0), min_balance(1000.0), max_withdrawal_limit(50000.0) {}

    void displayGuidelines() const {
        cout << "RBI Guidelines:" << endl;
        cout << "Minimum Interest Rate: " << min_interest_rate << "%" << endl;
        cout << "Minimum Balance: $" << min_balance << endl;
        cout << "Maximum Withdrawal Limit: $" << max_withdrawal_limit << endl;
    }
};

class Customer {
protected:
    string name;
    int age;
    string address;
public:
    Customer(string n, int a, string addr) : name(n), age(a), address(addr) {}

    void displayCustomerDetails() const {
        cout << "Customer Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

class Account : public Customer {
protected:
    string account_number;
    float balance;
public:
    Account(string n, int a, string addr, string acc_num, float bal) 
        : Customer(n, a, addr), account_number(acc_num), balance(bal) {}

    void displayAccountDetails() const {
        displayCustomerDetails();
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: $" << balance << endl;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: $" << amount << ", New Balance: $" << balance << endl;
    }

    void withdraw(float amount) {
        if(amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << ", Remaining Balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

class SBI : public Account, public RBI {
public:
    SBI(string n, int a, string addr, string acc_num, float bal) 
        : Account(n, a, addr, acc_num, bal) {}

    void displayBankDetails() const {
        cout << "Bank: SBI" << endl;
        displayAccountDetails();
        displayGuidelines();
    }
};

class ICICI : public Account, public RBI {
public:
    ICICI(string n, int a, string addr, string acc_num, float bal) 
        : Account(n, a, addr, acc_num, bal) {}

    void displayBankDetails() const {
        cout << "Bank: ICICI" << endl;
        displayAccountDetails();
        displayGuidelines();
    }
};

class PNB : public Account, public RBI {
public:
    PNB(string n, int a, string addr, string acc_num, float bal) 
        : Account(n, a, addr, acc_num, bal) {}

    void displayBankDetails() const {
        cout << "Bank: PNB" << endl;
        displayAccountDetails();
        displayGuidelines();
    }
};

int main() {
    SBI sbiCustomer("krishnam", 30, "123 Street, City", "SBI123456", 5000.0);
    ICICI iciciCustomer("krishna", 40, "456 Avenue, City", "ICICI123456", 7000.0);
    PNB pnbCustomer("krish", 35, "789 Boulevard, City", "PNB123456", 6000.0);

    sbiCustomer.displayBankDetails();
    sbiCustomer.deposit(2000);
    sbiCustomer.withdraw(1000);

    iciciCustomer.displayBankDetails();
    iciciCustomer.deposit(1500);
    iciciCustomer.withdraw(500);

    pnbCustomer.displayBankDetails();
    pnbCustomer.deposit(2500);
    pnbCustomer.withdraw(3000);

    return 0;
}

