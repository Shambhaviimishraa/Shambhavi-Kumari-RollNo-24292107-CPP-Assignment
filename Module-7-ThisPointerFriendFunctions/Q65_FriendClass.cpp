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

    friend class B; 
};

class B
{
public:
    void display(A obj)
    {
        cout << "Accessing private data of A: " << obj.x << endl;
    }
};

int main()
{
    A a(100);
    B b;
    b.display(a);
    return 0;
}
