//wap in c++ that simulates simple customer support system using switch case stmt in that many options are 1) for support 2)for building 3)for technical issue 4)to speak to an agent 5) invalid

#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Customer Support Menu\n";
    cout << "1. Account Support\n";
    cout << "2. Billing\n";
    cout << "3. Technical Issue\n";
    cout << "4. Speak to an Agent\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Account Support";
            break;

        case 2:
            cout << "You selected Billing";
            break;

        case 3:
            cout << "You selected Technical Issue";
            break;

        case 4:
            cout << "Connecting you to an agent...";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
