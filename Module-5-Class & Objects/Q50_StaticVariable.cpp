#include <iostream>
using namespace std;

class Count
{
private:
    static int c;

public:
    Count()
    {
        c++;
    }

    void display()
    {
        cout << c << endl;
    }
};

int Count::c = 0;

int main()
{
    Count a, b, c;
    a.display();
    return 0;
}
