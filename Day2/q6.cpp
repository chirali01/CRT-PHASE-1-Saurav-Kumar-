//wap in c++ that continuously take the positive integer as input from the user and add them to running a sum variable if the user enters a negative number immeadiately terminate the loop using the break stmt and print  the final sum

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    while (true) {
        cout << "Enter a positive number (negative to stop): ";
        cin >> num;

        if (num < 0) {
            break;
        }

        sum += num;
    }

    cout << "Final sum is: " << sum;

    return 0;
}
