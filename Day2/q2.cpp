//wap in c++ that takes an integer input representing a perosn age use an else if ladder to determine and print 1) eligible to vote if age is 100 or more in century category 2) eligible to vote if age is between 18 and 99 3) not eligible to vote if age is 0 to 17 and invalid if age is negative

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age";
    }
    else if (age <= 17) {
        cout << "Not eligible to vote";
    }
    else if (age >= 18 && age <= 99) {
        cout << "Eligible to vote";
    }
    else { // age >= 100
        cout << "Eligible to vote (Century Category)";
    }

    return 0;
}
