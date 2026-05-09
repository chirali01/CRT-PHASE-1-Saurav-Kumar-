//WAP in C++ for sum of array elements. take sum variable with number 1 2 3 4 5 6.
#include <iostream>
using namespace std;
class Sum {
public:
    int sumArray(int num[], int n) {
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += num[i];
        }
        return sum;
    }
};
int main() {
    int nums[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);
    Sum s1;
    int ans = s1.sumArray(nums, n);
    cout << "Sum of array elements is: " << ans;
    return 0;
}
