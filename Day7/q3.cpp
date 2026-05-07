//inheritance

#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
public:
    int roll;

    void displayRoll() {
        cout << "Roll Number: " << roll << endl;
    }
};

int main() {
    Student s;

    s.name = "John";
    s.roll = 101;

    s.displayName();
    s.displayRoll();

    return 0;
}
