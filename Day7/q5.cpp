//multilevel inheritance w class like cricketer example


#include <iostream>
using namespace std;

class Cricketer
{
protected:
    int runs;

public:
    void setRuns(int r)
    {
        runs = r;
    }

    void show()
    {
        cout << "Runs scored: " << runs << endl;
    }
};

class Batsman : public Cricketer
{
public:
    void inputRuns(int r)
    {
        setRuns(r);
    }

    void display()
    {
        show();
    }
};

class Captain : public Batsman
{
public:
    void captainInfo()
    {
        cout << "This is the captain of the team." << endl;
    }
};

int main()
{
    Captain c;

    c.captainInfo();
    c.inputRuns(150);
    c.display();

    return 0;
}
