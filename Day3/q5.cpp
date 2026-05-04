//wap in c++ that takes a input integer fron user 1) find the fibonacci sequence between 1 to n

#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;

    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci sequence: ";

    while (a <= n) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
