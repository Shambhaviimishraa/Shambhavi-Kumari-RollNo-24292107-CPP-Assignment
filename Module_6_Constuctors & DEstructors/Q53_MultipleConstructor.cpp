#include <iostream>
using namespace std;

class MultipleConstructor
{
private:
    int x, y;

public:
    MultipleConstructor()
    {
        x = 0;
        y = 0;
    }

    MultipleConstructor(int a)
    {
        x = a;
        y = 0;
    }

    MultipleConstructor(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << x << endl;
        cout << y << endl;
    }
};

int main()
{
    MultipleConstructor m1;
    MultipleConstructor m2(5);
    MultipleConstructor m3(5, 10);

    m1.display();
    m2.display();
    m3.display();

    return 0;
}
