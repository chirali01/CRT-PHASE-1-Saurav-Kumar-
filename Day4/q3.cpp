//Write a program in C++ to print the following pattern using nested loops

#include <iostream>
using namespace std;

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4 - i; j++) {
            cout << " ";   // spaces
        }
        for (j = 1; j <= i; j++) {
            cout << "*";   // stars
        }
        cout << endl;
    }

    return 0;
}
