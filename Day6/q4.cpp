//wap in c++ which has name of area class and you are printing multiple types of area like rectangle, square and circle and for that you will have to overwrite the constructor and if input =0 then it doesnt print the area

#include <iostream>
using namespace std;

class Area {
public:
    Area(int l, int b) {
        if (l == 0 || b == 0) return;
        cout << "Area of Rectangle: " << l * b << endl;
    }

    Area(int s) {
        if (s == 0) return;
        cout << "Area of Square: " << s * s << endl;
    }

    Area(float r) {
        if (r == 0) return;
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

int main() {
    int l, b, s;
    float r;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    cout << "Enter side of square: ";
    cin >> s;

    cout << "Enter radius of circle: ";
    cin >> r;

    Area obj1(l, b);
    Area obj2(s);
    Area obj3(r);

    return 0;
}
