#include <iostream>
using namespace std;

int main() 
{
    int a = 10;

    cout << " Value of a = " << a << endl;

    cout << "Pre-increment (++a) = " << ++a << endl;
    cout << "Value of a after pre-increment = " << a << endl;

    cout << "Post-increment (a++) = " << a++ << endl;
    cout << "Value of a after post-increment = " << a << endl;

    cout << "Pre-decrement (--a) = " << --a << endl;
    cout << "Value of a after pre-decrement = " << a << endl;

    cout << "Post-decrement (a--) = " << a-- << endl;
    cout << "Value of a after post-decrement = " << a << endl;

    return 0;
}
