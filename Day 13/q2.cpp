//WAP in c++ to check if the number is power of 2 using recursion.
#include<iostream>
using namespace std;

bool powerOfTwo(int x)
{
    if(x == 0)
        return false;
    if(x == 1)
        return true;
    return (x % 2 == 0) && powerOfTwo(x / 2);
}
int main()
{
    int arr[] = {8, 1, 0, 9};
    for(int i = 0; i < 4; i++)
    {
        int n = arr[i];
        if(powerOfTwo(n))
            cout << n << " is Power of 2" << endl;
        else
            cout << n << " is Not Power of 2" << endl;
    }
    return 0;
}
