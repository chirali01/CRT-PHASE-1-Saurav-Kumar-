//abstraction

#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    void displayMarks() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.setMarks(85);
    s.displayMarks();

    return 0;
}
