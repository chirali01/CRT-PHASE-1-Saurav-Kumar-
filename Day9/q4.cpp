//WAP in c++ for reversing or swapping of an array. nums=[1,2,3,4,5]
#include <iostream>
using namespace std;
void ReverseArray(int num[],int n){
    int i=0;
    int j = n-1;
    while(i<j){
        int temp = num[i];
        num[i] = num[j];
        num[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
}
int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    ReverseArray(nums, n);
    return 0;
}
