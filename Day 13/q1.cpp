//WAP in c++ to check if n is power of 2 from the following given number
//1. n=8.
//2. n=1.
//3. n=0.
//4. n=9.
#include<iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n <= 0)
    {
        return false;
    }
    return (n & (n - 1)) == 0;
}
int main()
{
    // Test cases
    int n1 = 8, n2 = 1, n3 = 0, n4 = 9;
    
    cout << "Is " << n1 << " a power of two? " << (isPowerOfTwo(n1) ? "Yes" : "No") << endl;
    cout << "Is " << n2 << " a power of two? " << (isPowerOfTwo(n2) ? "Yes" : "No") << endl;
    cout << "Is " << n3 << " a power of two? " << (isPowerOfTwo(n3) ? "Yes" : "No") << endl;
    cout << "Is " << n4 << " a power of two? " << (isPowerOfTwo(n4) ? "Yes" : "No") << endl;
    
    return 0;
}
