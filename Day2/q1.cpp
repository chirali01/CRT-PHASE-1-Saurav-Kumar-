//wap in c++ that takes a parson age as input if age is 18 or older print eligible to vote 

#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Eligible to vote";
    } else {
        cout << "Not eligible to vote";
    }

    return 0;
}
