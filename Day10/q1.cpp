//WAP in c++ for string and using its all the methods.

#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
    string str1 = "Hello";
    string str2 = "JECRC";
    cout << str1 << " " << str2 << endl;

    //method of string
    
    //1. length of string
    int n = str1.length();
    cout<< "Length of string is: " << n << endl;
    //2. Append String
    cout << "After Appending String is"<< str1.append(" Student") << endl;
    //3. Empty String
    cout << "Is String Empty: " << str2.empty() << endl;
    //4. Concatenate String
    cout << "After Concatenating String is: " << str1 + " " + "Bachoo" << endl;
    cout << "After Concatenating String is: " << str1  << endl;
    //5. pushback() method
    str2.push_back('U');
    cout << "After pushback() method: " << str2 << endl; //Prints "JECRCU"
    //6. popback() method
    str2.pop_back();
    cout << "After popback() method: " << str2 << endl; //Prints "JECRC"
    //7. Find Method
    int index = str1.find("ello");
    cout << "Index of 'ello' in str1: " << index << endl;
    //8. Swap Method
    str1.swap(str2);
    cout << "After Swapping String is: " << endl;
    cout << "str1: " << str1 << endl; //Prints "JECRC"
    cout << "str2: " << str2 << endl; //Prints "Hellostudent"
    //9. Substring Method
    string substr = str2.substr(5, 6); //5 is index and 6 is length of substring
    cout << "Substring of str2 from index 5 with length 6: " << substr << endl; 
    //10. Getline Method
    string str3;
    //cin >> str3; 
    getline(cin, str3); 
    cout << "You entered: " << str3 << endl; 
    return 0;
}
