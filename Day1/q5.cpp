//wap in c++ that takes 2 number and operator as input from the user perform the corresponding arithmetic operation and print the result without if else

#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cin >> a >> b >> op;

    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
    }

    return 0;
}
