//wap in c++ to take input of 2 variables from user and match it with 2 constants variable present or store with us if variable matches print login successfully else print invalid credentials 

#include <iostream>
using namespace std;

int main() {
    string user, pass;
    const string USERNAME = "admin";
    const string PASSWORD = "1234";

    cin >> user >> pass;

    cout << ((user == USERNAME && pass == PASSWORD) ? "Login successfully" : "Invalid credentials");

    return 0;
}
