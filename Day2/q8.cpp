//wap in c++ that takes a year as input and check if it is a leap yaer or not

#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "Leap Year";
    } else {
        cout << "Not a Leap Year";
    }

    return 0;
}
