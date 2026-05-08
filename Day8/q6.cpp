//WAP in c++ for const member function by taking class car with speed 120 in private and changing it to 150 by using const member function.
#include <iostream>
using namespace std;
class Car
{
private:
    int speed = 120;
public:
    void showSpeed() const
    {
        cout << "Car Speed: " << speed << endl;
    }
};
int main()
{
    Car c;
    c.showSpeed();
    return 0;
}
