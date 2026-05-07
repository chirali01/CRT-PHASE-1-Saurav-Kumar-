//virtual function code

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Display function of Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Display function of Derived class" << endl;
    }
};

int main() {
    Base *ptr;
    Derived d;

    ptr = &d;

    ptr->display();

    return 0;
}
