//abstraction

#include <iostream>
using namespace std;

class ATM
{
private:
    int balance;

public:
    ATM(int initialBalance)
    {
        balance = initialBalance;
    }

    void withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance = balance - amount;
            cout << "Withdrawal successful" << endl;
        }
    }

    void showBalance()
    {
        cout << "Current balance: " << balance << endl;
    }
};

int main()
{
    ATM a(5000);

    a.showBalance();

    a.withdraw(500);

    a.showBalance();

    return 0;
}
