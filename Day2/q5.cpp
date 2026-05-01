//wap in c++ that takes an integer  n as input print all numbers from 1 to n but skip any no that is multiple of 3 using continuation statement

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            continue;  
        }
        cout << i << " ";
    }

    return 0;
}
