/*To place an order, the system needs both user details and cart details.
 These two sets of information belong to separate modules, but the final Order screen must combine both.
 Design a C++ program in which one Order class uses both functionalities together.*/
#include <iostream>
using namespace std;

class User {
protected:
    string userName;

public:
    void setUser(string name) {
        userName = name;
    }
};

class Cart {
protected:
    int itemCount;

public:
    void setCart(int count) {
        itemCount = count;
    }
};

class Order : public User, public Cart {
public:
    void displayOrder() {
        cout << "User: " << userName << endl;
        cout << "Items in Cart: " << itemCount << endl;
    }
};

int main() {
    Order o;
    o.setUser("Lavanya");
    o.setCart(4);
    o.displayOrder();
    return 0;
}