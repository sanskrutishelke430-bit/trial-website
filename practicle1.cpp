#include <iostream>
#include <string>
using namespace std;

class Bank
{
    int accNo;
    string name;
    float balance;

public:
    void input()
    {
        cout << "Enter Account No: ";
        cin >> accNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amt;
        cout << "Enter Deposit: ";
        cin >> amt;

        balance = balance + amt;
    }

    void display()
    {
        cout << "\nAccount No: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }
};

int main()
{
    Bank a, b;

    cout << "Account 1\n";
    a.input();
    a.deposit();

    cout << "\nAccount 2\n";
    b.input();
    b.deposit();

    cout << "\n--- Account 1 ---";
    a.display();

    cout << "\n--- Account 2 ---";
    b.display();

    return 0;
}
