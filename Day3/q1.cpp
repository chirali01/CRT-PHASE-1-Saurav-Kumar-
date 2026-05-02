//wap in c++ that takes an integer input from user print all the numbers between 1 to n that is divisible by 2 

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
