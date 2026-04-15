/*Write a C++ program to demonstrate the use of static data members.
Create a class Account with:
· Account Number
· Account Holder Name
· Balance
· A static variable to count the total number of accounts created
Requirements:
1. Increment the static variable whenever an object is created.
2. Display individual account details.
3. Display the total number of accounts using a static member function.*/
#include <iostream>
using namespace std;

class Account {
private:
    int accNo;
    string name;
    float balance;
    static int count;

public:
    void read() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Balance: ";
        cin >> balance;
        count++;
    }

    void display() {
        cout << "\nAccount No: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }

    static void showCount() {
        cout << "\nTotal Accounts: " << count << endl;
    }
};

int Account::count = 0;

int main() {
    Account a1, a2;

    a1.read();
    a2.read();

    a1.display();
    a2.display();

    Account::showCount();

    return 0;
}