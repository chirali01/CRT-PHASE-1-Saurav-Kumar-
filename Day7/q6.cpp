//wap in c++ for multiple inheritance like cricketer example

#include <iostream>
using namespace std;

class Batsman {
public:
    void batting() {
        cout << "Good at batting" << endl;
    }
};

class Bowler {
public:
    void bowling() {
        cout << "Good at bowling" << endl;
    }
};

class Cricketer : public Batsman, public Bowler {
public:
    void details() {
        cout << "Cricketer can bat and bowl" << endl;
    }
};

int main() {
    Cricketer c;

    c.batting();
    c.bowling();
    c.details();

    return 0;
}
