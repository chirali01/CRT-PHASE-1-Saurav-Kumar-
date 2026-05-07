//WAP in c++ for single inheritance with class like cricketer example.
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

int main()
{
    Batsman b;

    b.inputRuns(100);
    b.display();

    return 0;
}
