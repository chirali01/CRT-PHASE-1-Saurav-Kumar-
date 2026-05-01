//wap in c++ that takes  2 integer input a and b multiply a by 4 using biitwise left operator printt the value of a

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    a = a << 2;
    cout << a;
    return 0;
}
