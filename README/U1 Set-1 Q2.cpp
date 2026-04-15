/*Write a C++ program that:
1. Reads n student marks using an array.
2. Calculates:
o Total marks
o Average marks (use explicit type conversion).
3. Displays:
o Grade using conditional statements
§ Average ≥ 80 → Grade A
§ Average ≥ 60 → Grade B
§ Average ≥ 40 → Grade C
§ Else → Fail*/
#include <iostream>
using namespace std;

int main() {
    int n, total = 0;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter marks: ";
        cin >> marks[i];
        total += marks[i];
    }

    float avg = (float) total / n;

    cout << "Average: " << avg << endl;

    if (avg >= 80)
        cout << "Grade A";
    else if (avg >= 60)
        cout << "Grade B";
    else if (avg >= 40)
        cout << "Grade C";
    else
        cout << "Fail";

    return 0;
}