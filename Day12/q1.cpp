// WAP in c++ to sort an array using bubble sort.
#include<iostream>
using namespace std;
void swap_array(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void bubble_Sort(int num[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for(int j = 0; j < n - i - 1; j++)
        {
            if(num[j] >  num[j + 1])
            {
                swap_array(num[j], num[j + 1]);
                flag = true;
            }
        }
        if(!flag)
        {
            cout << "Array is already sorted." << endl;
            break;
        }
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_Sort(arr, size);
    cout << "Sorted Array is : ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
