/*Write a C++ program to implement a class Account that demonstrates constructor overloading to support both types of account creation.
 Display the account balance for each account.*/
#include <iostream>
using namespace std;

class Account {
    float balance;

public:
    Account() {
        balance = 10;
    }

    Account(float b) {
        balance = b;
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a1;
    Account a2(4600);

    a1.display();
    a2.display();

    return 0;
}