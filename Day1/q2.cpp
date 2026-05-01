//wap in c++ that declare a global integer variable initialize 200 in the main function take an integer input from user perform floating point division of the global variable by the user input using explicit typecasting store it in local double variable and print the result
#include <iostream>
using namespace std;

int g;

int main() {
    g = 200;
    int x;
    cin >> x;
    double result = (double)g / x;
    cout << result;
    return 0;
}
