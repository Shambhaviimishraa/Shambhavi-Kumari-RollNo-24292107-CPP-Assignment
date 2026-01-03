#include <iostream>
using namespace std;

class ClassB; // forward declaration

class ClassA
{
private:
    int a;

public:
    void setData(int val)
    {
        a = val;
    }

    friend void show(ClassA, ClassB); 
};

class ClassB
{
private:
    int b;

public:
    void setData(int val)
    {
        b = val;
    }

    friend void show(ClassA, ClassB); 
};

void show(ClassA objA, ClassB objB)
{
    cout << "Data from ClassA: " << objA.a << endl;
    cout << "Data from ClassB: " << objB.b << endl;
}

int main()
{
    ClassA a;
    ClassB b;

    a.setData(10);
    b.setData(20);

    show(a, b);

    return 0;
}
