/*In the banking system, whenever an account object is destroyed, the system should 
display a message “Account closed successfully”.
Write a C++ program that demonstrates the use of a destructor in a class Account.*/
#include <iostream>
using namespace std;

class Account {
public:
    ~Account() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    Account a1, a2;
    return 0;
}