//create a student class with roll number and name and print inside it

#include <iostream>
using namespace std;
class Student {
    string name;
    int roll;
public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
    }
};
int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}
