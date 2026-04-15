/*Write a C++ program that implements a copy constructor in the class Account to copy 
the balance from one account object to another.*/
#include <iostream>
using namespace std;

class Account {
    float balance;

public:
    Account(float b) {
        balance = b;
    }

    Account(const Account &a) {
        balance = a.balance;
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a1(56000);
    Account a2 = a1;

    a1.display();
    a2.display();

    return 0;
}