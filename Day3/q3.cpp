// wap in c++ having value of i from 1-10 and check what it prints using do while

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        cout << i << " ";
        i++;
    } while(i <= 10);

    return 0;
}
