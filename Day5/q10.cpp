//Write a function in c++ that apply 10% discount using referece. Update the orignal bill amount and print it.
#include <iostream>
using namespace std;
void applyDisc(float &billAmt) {
    billAmt = billAmt - (0.10 * billAmt); 
} 
int main() {
    float billAmt;
    cout << "Enter original bill amount: ";
    cin >> billAmt;
    applyDisc(billAmt);   
    cout << "Bill after 10% discount: " << billAmt << endl;
    return 0;
}
