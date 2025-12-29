#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    (a > b) ? cout << "a is greater than b" : cout << "b is greater than or equal to a";

    return 0;
}
