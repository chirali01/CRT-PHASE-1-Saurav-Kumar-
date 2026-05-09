////Write in C++ program to initialize an array of 5 elements, display all the elements using a loop, and access a specific array element using its index.
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++)
     {
        cout << arr[i] << " ";
    }
    cout<< arr[7] << endl; 
    return 0;
}
