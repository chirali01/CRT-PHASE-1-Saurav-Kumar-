////write code for types of function 
//2) without arguments, with return type

#include <iostream>
using namespace std;

// function definition (no arguments, with return type)
int getNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

int main() {
    int result;

    result = getNumber();   // function call

    cout << "You entered: " << result;

    return 0;
}
