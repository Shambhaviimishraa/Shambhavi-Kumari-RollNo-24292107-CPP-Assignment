#include<iostream>
using namespace std;

int main()
{
  int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0)
    {
        if (number == 0)
        {
            cout << "The number is Zero";
        }
        else
        {
            cout << "The number is Positive";
        }
    }
    else
    {
        cout << "The number is Negative";
    }

    return 0;
}
