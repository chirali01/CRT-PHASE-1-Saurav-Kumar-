////write code for types of function 
//3) with arguments, without return type

#include <iostream>
using namespace std;

// function with arguments, no return type
void add(int a, int b) {
    cout << "Sum = " << a + b;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    add(num1, num2);   // function call

    return 0;
}
