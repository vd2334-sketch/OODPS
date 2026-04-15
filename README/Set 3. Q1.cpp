/*An online shopping application stores common product details such as product ID, name and price.
 Electronic products are a special category that additionally include warranty period. 
Design a C++ program in which ElectronicProduct reuses the common product details and displays full information.*/
#include <iostream>
using namespace std;

class Product {
protected:
    int productID;
    string name;
    float price;

public:
    void setProductDetails(int id, string n, float p) {
        productID = id;
        name = n;
        price = p;
    }

    void displayProductDetails() {
        cout << "Product ID: " << productID << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

class ElectronicProduct : public Product {
private:
    int warranty;
    
public:
    void setWarranty(int w) {
        warranty = w;
    }
    void displayFullDetails() {
        displayProductDetails();
        cout << "Warranty: " << warranty << " years" << endl;
    }
};

int main() {
    ElectronicProduct e;
    e.setProductDetails(101, "Laptop", 55000);
    e.setWarranty(2);
    e.displayFullDetails();

    return 0;
}