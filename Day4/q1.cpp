//draw a pattern of star with 5 rows and 4 columns

#include <iostream>
using namespace std;

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
