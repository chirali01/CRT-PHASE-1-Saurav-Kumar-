//wap in c++ that takes a student percentage between 0 to 100 as input and calculate their grades based on 1) 90 and above 2) 80 to 89 3) 70 to 79 4) 60 to 69 5) below 60 fail

#include <iostream>
using namespace std;

int main() {
    int percent;

    cout << "Enter percentage: ";
    cin >> percent;

    if (percent >= 90 && percent <= 100) {
        cout << "Grade: A";
    }
    else if (percent >= 80 && percent <= 89) {
        cout << "Grade: B";
    }
    else if (percent >= 70 && percent <= 79) {
        cout << "Grade: C";
    }
    else if (percent >= 60 && percent <= 69) {
        cout << "Grade: D";
    }
    else if (percent >= 0 && percent < 60) {
        cout << "Grade: Fail";
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}
