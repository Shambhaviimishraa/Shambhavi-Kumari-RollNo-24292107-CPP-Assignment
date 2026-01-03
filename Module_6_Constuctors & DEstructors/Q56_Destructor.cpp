#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Object created" << endl;
    }

    ~Demo()
    {
        cout << "Object destroyed" << endl;
    }
};

int main()
{
    Demo d1;
    {
        Demo d2;
    }
    return 0;
}
