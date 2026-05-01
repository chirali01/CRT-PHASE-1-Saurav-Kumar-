//wap in c++ that takes 2 integer as input from the user swap their values using a temporary variable and the print the updated value

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
    return 0;
}
