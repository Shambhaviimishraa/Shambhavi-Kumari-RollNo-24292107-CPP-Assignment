#include <iostream>
using namespace std;

class Largest
{
private:
    int a, b;

public:
    void read()
    {
        cin >> a >> b;
    }

    void display()
    {
        if (a > b)
            cout << a << endl;
        else
            cout << b << endl;
    }
};

int main()
{
    Largest obj;
    obj.read();
    obj.display();
    return 0;
}

