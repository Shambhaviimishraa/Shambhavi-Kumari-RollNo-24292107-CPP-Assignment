#include <iostream>
using namespace std;

class Sample
{
public:
    void show()
    {
        cout << "This is a member function" << endl;
    }
};

int main()
{
    Sample s;
    s.show();
    return 0;
}
