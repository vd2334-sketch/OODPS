/*Products in the application are classified into clothing, electronics and grocery.
 All these categories share common product details but differ in their category-specific display or pricing. 
Design a program to show how one base Product class can be used by multiple derived product categories.*/
#include <iostream>
using namespace std;

class Product {
protected:
    string name;
    float price;

public:
    void setDetails(string n, float p) {
        name = n;
        price = p;
    }
};

class Clothing : public Product {
public:
    void display() {
        cout << "Clothing: " << name << ", Price: " << price << endl;
    }
};

class Electronics : public Product {
public:
    void display() {
        cout << "Electronics: " << name << ", Price: " << price << endl;
    }
};

class Grocery : public Product {
public:
    void display() {
        cout << "Grocery: " << name << ", Price: " << price << endl;
    }
};

int main() {
    Clothing c;
    Electronics e;
    Grocery g;
    c.setDetails("Shirt", 1200);
    e.setDetails("Mobile", 18000);
    g.setDetails("Rice", 60);
    c.display();
    e.display();
    g.display();

    return 0;
}