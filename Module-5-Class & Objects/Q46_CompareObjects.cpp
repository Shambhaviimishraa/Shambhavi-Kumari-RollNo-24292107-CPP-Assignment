#include <iostream>
using namespace std;

class Compare
{
private:
    int value;

public:
    void read()
    {
        cin >> value;
    }

    void compare(Compare c)
    {
        if (value > c.value)
            cout << "First object is greater" << endl;
        else if (value < c.value)
            cout << "Second object is greater" << endl;
        else
            cout << "Both objects are equal" << endl;
    }
};

int main()
{
    Compare a, b;
    a.read();
    b.read();
    a.compare(b);
    return 0;
}
