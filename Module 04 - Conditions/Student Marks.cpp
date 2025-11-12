#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter mars: ";
    cin >> num;

    if (num >= 91 && num <= 100)
    {
        cout << "Excellent";
    }
    else if (num >= 81 && num <= 90)
    {
        cout << "Very Good";
    }
    else if (num >= 71 && num <= 80)
    {
        cout << "Good";
    }
    else if (num >= 61 && num <= 70)
    {
        cout << "Can do better";
    }
    else if (num >= 51 && num <= 60)
    {
        cout << "Average";
    }
    else if (num >= 40 && num <= 50)
    {
        cout << "Below Avg";
    }
    else
    {
        cout << "Fail";
    }
}
