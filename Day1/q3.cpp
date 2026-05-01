//wap in c++ that takes 3 integer input representing the sides of triangle print true if triangle is equilateral otherwise false use only relational and logical operator

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a == b && b == c);
    return 0;
}
