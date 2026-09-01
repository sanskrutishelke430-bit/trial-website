#include <iostream>
using namespace std;

class cap
{
    string name;
    float percentile;
    int num;

public:

    void input()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter percentile: ";
        cin >> percentile;

        cout << "Enter application number: ";
        cin >> num;
    }

    void disp()
    {
        cout << "BTech Admission" << endl;
        cout << "Name: " << name << endl;
        cout << "Percentile: " << percentile << endl;
        cout << "Application Number: " << num << endl;
    }
};

int main()
{
    cap c;

    c.input();
    c.disp();

    return 0;
}
