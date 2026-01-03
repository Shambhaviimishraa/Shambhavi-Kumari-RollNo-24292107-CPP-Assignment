#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    void read()
    {
        cin >> real >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex add(Complex c1, Complex c2);
};

Complex add(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main()
{
    Complex c1, c2, c3;
    c1.read();
    c2.read();
    c3 = add(c1, c2);
    c3.display();
    return 0;
}
