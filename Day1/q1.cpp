//WAP in C++ that takes temperature values in Celsius as input from users, converts into Fahrenheit, and results as output.

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    cin >> celsius;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << fahrenheit;
    return 0;
}
