//Write a program in C++ to print the following pattern using nested loops

#include <iostream>

using namespace std;

int main() {

    int n = 5;  // number of rows

    for(int i = 1; i <= n; i++) {

        // print spaces

        for(int j = 1; j <= n - i; j++) {

            cout << " ";

        }

        // print stars

        for(int k = 1; k <= i; k++) {

            cout << "* ";

        }

        cout << endl;

    }

    return 0;

}
