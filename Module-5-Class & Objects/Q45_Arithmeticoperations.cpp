#include <iostream>
using namespace std;

class Arithmetic
{
private:
    int a, b;

public:
    void read()
    {
        cin >> a >> b;
    }

    void add()
    {
        cout << a + b << endl;
    }

    void sub()
    {
        cout << a - b << endl;
    }

    void mul()
    {
        cout << a * b << endl;
    }

    void div()
    {
        cout << a / b << endl;
    }
};

int main()
{
    Arithmetic obj;
    obj.read();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}


