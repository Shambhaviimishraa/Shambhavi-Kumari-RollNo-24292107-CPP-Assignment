#include <iostream>
using namespace std;

class Sample
{
private:
    int x, y;

public:
    void setValues(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }

    friend void swapValues(Sample &s);
};

void swapValues(Sample &s)
{
    int temp = s.x;
    s.x = s.y;
    s.y = temp;
}

int main()
{
    Sample s;
    s.setValues(10, 20);
    cout << "Before swap: ";
    s.display();

    swapValues(s);

    cout << "After swap: ";
    s.display();

    return 0;
}
