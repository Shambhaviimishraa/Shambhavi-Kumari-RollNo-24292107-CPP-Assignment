#include <iostream>
using namespace std;

class ConstructorOverloading
{
private:
    int a, b;

public:
    ConstructorOverloading()
    {
        a = 0;
        b = 0;
    }

    ConstructorOverloading(int x)
    {
        a = x;
        b = 0;
    }

    ConstructorOverloading(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << a << endl;
        cout << b << endl;
    }
};

int main()
{
    ConstructorOverloading c1;
    ConstructorOverloading c2(10);
    ConstructorOverloading c3(10, 20);

    c1.display();
    c2.display();
    c3.display();

    return 0;
}
