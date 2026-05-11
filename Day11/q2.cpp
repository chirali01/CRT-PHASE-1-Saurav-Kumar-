//binary search

//WAP in c++ for binary search.
#include <iostream>
using namespace std;
int BinarySearch(int nums[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int nums[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 30;

    int result = BinarySearch(nums, n, target);

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
