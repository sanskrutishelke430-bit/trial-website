#include <iostream>
#include <string>
using namespace std;

class Bank
{
    int accNo;
    string name;
    float balance;

public:
       stud()
       { 
             accNo=10;
    void inp1()
    {
        cout << "Enter value ";
        cin >> accNo>>name>>balance;
        }
        void inp2()
        {
             accNo= 10;
             name= 'sans';
             balance = 100.6;
             }

    

    void disp()
    {
       cout<<"info";
       cout<<accNo<<name<<balance;
    }


int main()
{
    Bank a, b;

    cout << "Account 1\n";
    a.input();
    a.deposit();

    cout << "\nAccount 2\n";
    b.input();
    b.deposit();

    cout << " Account 1 ";
    a.display();

    cout << "\n Account 2 ";
    b.display();

    return 0;
}
