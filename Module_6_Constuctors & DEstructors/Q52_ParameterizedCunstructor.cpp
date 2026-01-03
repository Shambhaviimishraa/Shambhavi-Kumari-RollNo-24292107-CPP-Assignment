#include <iostream>
using namespace std;

class ParameterizedConstructor
{
public:
    ParameterizedConstructor(int a)
    {
        cout << a << endl;
    }
};

int main()
{
    ParameterizedConstructor p(10);
    return 0;
}
