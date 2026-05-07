//wap in c++ for hierarchial  inheritance like cricketer example

#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;

    void input() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Batsman : public Cricketer {
public:
    void batting() {
        cout << name << " is a Batsman" << endl;
    }
};

class Bowler : public Cricketer {
public:
    void bowling() {
        cout << name << " is a Bowler" << endl;
    }
};

int main() {
    Batsman b;
    Bowler bw;

    b.input();
    b.batting();

    bw.input();
    bw.bowling();

    return 0;
}

