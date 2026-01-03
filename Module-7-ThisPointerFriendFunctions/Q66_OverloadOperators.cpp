#include <iostream>
using namespace std;

class Number
{
private:
    int x;

public:
    Number(int val = 0)
    {
        x = val;
    }

    friend Number operator+(Number n1, Number n2); 

    void display()
    {
        cout << "Value: " << x << endl;
    }
};

Number operator+(Number n1, Number n2)
{
    return Number(n1.x + n2.x);
}

int main()
{
    Number n1(10), n2(20), n3;
    n3 = n1 + n2;
    n3.display();
    return 0;
}
