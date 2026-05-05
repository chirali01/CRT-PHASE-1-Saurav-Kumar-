//Write a function with default agrument and calling it with and without argument..
#include <iostream>
using namespace std;
void display(int a = 10) {
    cout << "The value is: " << a << endl;
}
int main() {
    display(); 
    display(20); 
    return 0;
}
