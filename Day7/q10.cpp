//create a college mgmt system in that in base class containing name age details and 2 derived class student and teacher contains their data respectively then also create a virtual function they belong to which catgory by default they belong to that  category

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    virtual void category() {
        cout << "Belongs to Person Category" << endl;
    }
};

class Student : public Person {
public:
    int roll;
    float marks;

    void inputStudent() {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void category() {
        cout << "Belongs to Student Category" << endl;
    }

    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

class Teacher : public Person {
public:
    string subject;
    float salary;

    void inputTeacher() {
        cout << "Enter subject: ";
        cin >> subject;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void category() {
        cout << "Belongs to Teacher Category" << endl;
    }

    void displayTeacher() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Person *ptr;

    Student s;
    Teacher t;

    cout << "Enter Student Details" << endl;
    s.inputPerson();
    s.inputStudent();

    cout << endl;

    cout << "Enter Teacher Details" << endl;
    t.inputPerson();
    t.inputTeacher();

    cout << endl;

    ptr = &s;
    s.displayStudent();
    ptr->category();

    cout << endl;

    ptr = &t;
    t.displayTeacher();
    ptr->category();

    return 0;
}
