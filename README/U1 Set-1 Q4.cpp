/*Write a C++ program that:
1. Defines a class Book with:
o Book ID
o Book Title
o Price
2. Dynamically allocates memory for an object using a pointer to object.
3. Accesses class members using the pointer.
4. Displays the book details.*/
#include <iostream>
using namespace std;

class Book {
public:
    int id;
    string title;
    float price;

    void read() {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nBook ID: " << id;
        cout << "\nTitle: " << title;
        cout << "\nPrice: " << price << endl;
    }
};

int main() {
    Book *b = new Book;

    b->read();
    b->display();

    delete b;

    return 0;
}