#include <iostream>
using namespace std;

class CopyConstructor
{
public:
    int x;

    CopyConstructor(int a)
    {
        x = a;
    }

    CopyConstructor(CopyConstructor &c)
    {
        x = c.x;
    }
};

int main()
{
    CopyConstructor c1(20);
    CopyConstructor c2(c1);
    cout << c2.x << endl;
    return 0;
}
