/*: Discounts in the application may come from festival offers or membership benefits.
 Every discount type must implement applyDiscount(), but the general Discount class should only define 
 the contract and should not be instantiated directly.
 Design the required C++ program.*/
 #include <iostream>
using namespace std;

class Discount {
public:
    virtual void applyDiscount(float price) = 0; 
};

class FestivalDiscount : public Discount {
public:
    void applyDiscount(float price) override {
        float finalPrice = price - 200;
        cout << "Festival Price: " << finalPrice << endl;
    }
};

class MembershipDiscount : public Discount {
public:
    void applyDiscount(float price) override {
        float finalPrice = price - 100;
        cout << "Membership Price: " << finalPrice << endl;
    }
};

int main() {
    Discount* d;
    FestivalDiscount f;
    MembershipDiscount m;
    d = &f;
    d->applyDiscount(1000);
    d = &m;
    d->applyDiscount(1000);
    return 0;
}