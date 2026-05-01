//wap in c++ that takes 3 integer as input from the user calculate their total sum and average and print output

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    double avg = sum / 3.0;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg;
    return 0;
}
