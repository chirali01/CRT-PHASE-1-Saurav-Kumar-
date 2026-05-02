//wap in c++ that take age as input from the user and check if age is 18 or above print eligible to vote or if below 19 not eligible using while loop

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    while (true) {
        if (age >= 18) {
            cout << "Eligible to vote";
        } else {
            cout << "Not eligible to vote";
        }
        break;
    }

    return 0;
}
