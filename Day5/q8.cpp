//Write a function that takes no of coffee shots and return a total of coffee volume if one shot is equal to 30 ml.
#include <iostream>
using namespace std;
int f(int a) {
    int b;
    b = a * 30;
    return b;
}
int main() {
    int a, b;
    cout << "Enter no, of coffee shots: ";
    cin >> a;
    b = f(a);
    cout << "Total volume = " << b << " ml";
    return 0;
}
