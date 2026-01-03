#include <iostream>
using namespace std;

class Sample
{
public:
    Sample()
    {
        cout << "Default constructor called" << endl;
    }
};

int main()
{
    Sample s;
    return 0;
}
