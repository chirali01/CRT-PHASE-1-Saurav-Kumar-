//wap in c++ to create a student mgmt system where we store and display student details name roll no reg no email id phone  number marks using parameterized and default constructor

#include <iostream>
using namespace std;

class Student {
    string name, email;
    int roll, reg_no;
    long long phone;
    float marks;

public:
    Student() {
        name = "NA";
        roll = 0;
        reg_no = 0;
        email = "NA";
        phone = 0;
        marks = 0;
    }

    Student(string n, int r, int reg, string e, long long p, float m) {
        name = n;
        roll = r;
        reg_no = reg;
        email = e;
        phone = p;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Reg No: " << reg_no << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << phone << endl;
        cout << "Marks: " << marks << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Student s1;
    s1.display();

    Student s2("John", 101, 5001, "john@gmail.com", 9876543210, 88.5);
    s2.display();

    return 0;
}
