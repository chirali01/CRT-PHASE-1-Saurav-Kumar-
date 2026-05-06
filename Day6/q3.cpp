//write a function for default constructor

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    Student() {
        name = "Default";
        roll = 0;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s;
    s.display();
    return 0;
}
