//WAP in c++ for sum of digits of a number using recursion.
#include<iostream>
using namespace std;
int sumOfDigits(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sumOfDigits(n / 10);
    }
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of digits of " << num << " is: " << sumOfDigits(num) << endl;
    return 0;
}
