#include <iostream>
using namespace std;

class B; 
class A
{
private:
    int x;

public:
    A(int val)
    {
        x = val;
    }

    friend void showB(B); 
};

class B
{
private:
    int y;

public:
    B(int val)
    {
        y = val;
    }

    void displayA(A a)
    {
        cout << "Cannot access A's private data from B" << endl;
    }
};

void showB(B b)
{
    cout << "Accessing B's private data from friend function: " << b.y << endl;
}

int main()
{
    A a(10);
    B b(20);

    showB(b); 
    b.displayA(a); 
    return 0;
}
