// WAP in c++ to sort an array using selection sort.
#include<iostream>
using namespace std;
void swap_array(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void selection_Sort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap_array(arr[i], arr[mini]);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    selection_Sort(arr, size);
    cout << "Sorted Array is : ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
