#include <iostream>
using namespace std;

int main() 
{
    // Implicit Typecasting
    int a = 10;
    float b = 3.5;
    float sum = a + b; // 'a' is automatically converted to float
    cout << "Implicit Typecasting:" << endl;
    cout << "Sum of int and float = " << sum << endl;

    // Explicit Typecasting
    float c = 9.7;
    int d;
    d = (int)c; // float converted to int manually
    cout << "\nExplicit Typecasting:" << endl;
    cout << "Float " << c << " converted to int = " << d << endl;

    return 0;
}
