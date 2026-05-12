//WAP in c++ for recusrsive tree of fabonnaci seires using dry run method.
#include<iostream>
using namespace std;
int fibonacci(int n, int space = 0)
{
    for(int i = 0; i < space; i++)
    {
        cout << " ";
    }
    cout << "fib(" << n << ")" << endl;
    if(n == 0 || n == 1)
    {
        return n;
    }
    return fibonacci(n - 1, space + 4) + fibonacci(n - 2, space + 4);
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int result = fibonacci(n);
    cout << "Fibonacci Number: " << result;
    return 0;
}
