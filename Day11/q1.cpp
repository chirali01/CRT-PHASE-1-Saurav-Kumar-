//linear search

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

    return -1;
}

int main()
{
    int nums[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 30;

    int result = LinearSearch(nums, n, target);

    if (result != -1)
    {
        cout << "Element found at index: " << result;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}
