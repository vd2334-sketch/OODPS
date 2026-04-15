/*Write a C++ program that demonstrates method overloading using a function deposit() to implement both operations.*/
#include <iostream>
using namespace std;

class Account {
    float balance;

public:
    Account() {
        balance = 0;
    }

    void deposit(float amt) {
        balance += amt;
    }

    void deposit(float amt, float bonus) {
        balance += amt + bonus;
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a;

    a.deposit(1000);
    a.deposit(500, 50);

    a.display();

    return 0;
}