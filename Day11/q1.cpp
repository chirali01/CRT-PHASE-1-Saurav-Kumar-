//WAP in c++ for linear search.
#include <iostream>
using namespace std;
int LinearSearch(int nums[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1; //Element not found.
}
