//Write a program in C++ to print the following pattern using nested loops

#include <iostream>
using namespace std;

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {        // rows
        for (j = 1; j <= i; j++) {    // stars increase each row
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
