//Write a program in C++ that simulates an ATM withdrawal system. The program should take the withdrawal amount as an input from the user and determine whether the transaction is valid or not. Withdrawal amount should not be zero.

#include <iostream>
using namespace std;

int main() {
    int amount;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid transaction";
    } else {
        cout << "Transaction successful";
    }

    return 0;
}
