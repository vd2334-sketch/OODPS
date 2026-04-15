/*Write a C++ program to overload the + operator so 
that two Account objects can be added to produce a new account with the combined balance.*/
#include <iostream>
using namespace std;

class Account {
    float balance;

public:
    Account(float b = 0) {
        balance = b;
    }

    Account operator+(Account a) {
        return Account(balance + a.balance);
    }

    void display() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a1(6700), a2(2000);

    Account total = a1 + a2;    

    total.display();

    return 0;
}