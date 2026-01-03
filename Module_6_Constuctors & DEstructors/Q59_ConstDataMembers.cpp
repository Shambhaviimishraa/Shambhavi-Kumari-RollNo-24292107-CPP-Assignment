#include <iostream>
using namespace std;

class ConstDemo
{
private:
    const int x;

public:
    ConstDemo(int val) : x(val)  
    {
    }

    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    ConstDemo c(50);
    c.display();
    return 0;
}
