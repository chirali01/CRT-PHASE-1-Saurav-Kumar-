//write a function to create student class with name roll number inside it their should be reg no that should be private and store it inside another class that cannot access by us only college can access

#include <iostream>
using namespace std;

class College;

class Student {
private:
    int reg_no;

public:
    string name;
    int roll;

    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter registration number: ";
        cin >> reg_no;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }

    friend class College;
};

class College {
public:
    void showRegNo(Student s) {
        cout << "Registration Number: " << s.reg_no << endl;
    }
};

int main() {
    Student s;
    College c;

    s.input();
    s.display();
    c.showRegNo(s);

    return 0;
}
