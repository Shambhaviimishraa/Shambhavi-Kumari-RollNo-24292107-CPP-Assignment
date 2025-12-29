#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    cout << "Initial value of a = " << a << endl;

    a = a + 5;   
    cout << "After  a = a + 5, value of a = " << a << endl;

    a = a - 3;   
    cout << "After a - 3, value of a = " << a << endl;

    a = a * 2;   
    cout << "After a = a * 2, value of a = " << a << endl;

    a = a / 4;   
    cout << "After a = a / 4, value of a = " << a << endl;

    a = a % 3;   
    cout << "After  a = a % 3, value of a = " << a << endl;

    return 0;
}
