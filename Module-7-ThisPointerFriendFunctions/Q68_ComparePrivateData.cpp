#include <iostream>
using namespace std;

class B; 
class A
{
private:
    int x;

public:
    void setData(int val)
    {
        x = val;
    }

    friend void compare(A, B);
};

class B
{
private:
    int y;

public:
    void setData(int val)
    {
        y = val;
    }

    friend void compare(A, B);
};

void compare(A objA, B objB)
{
    if (objA.x > objB.y)
        cout << "A's data is greater" << endl;
    else if (objA.x < objB.y)
        cout << "B's data is greater" << endl;
    else
        cout << "Both are equal" << endl;
}

int main()
{
    A a;
    B b;
    a.setData(30);
    b.setData(20);
    compare(a, b);
    return 0;
}
