// WAP in c++ to sort an array using insertion sort.
#include<iostream>
using namespace std;
void insertion_Sort(int nums[], int n){
    for(int i= 1; i<n; i++){
        int key = nums[i];
        int j = i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
}
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertion_Sort(arr, size);
    cout << "Sorted Array is : ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
