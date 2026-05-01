//wap in c++ that takes a single alphabt  charcater as a input from the user and determines whether it is vowel or consonants

#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ?
        ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
          ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') ?
            cout << "Vowel" : cout << "Consonant")
        : cout << "Invalid input";

    return 0;
}
