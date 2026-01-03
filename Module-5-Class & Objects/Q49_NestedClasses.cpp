#include <iostream>
using namespace std;

class Outer
{
public:
    class Inner
    {
    public:
        void show()
        {
            cout << "This is inner class" << endl;
        }
    };

    void display()
    {
        cout << "This is outer class" << endl;
    }
};

int main()
{
    Outer o;
    Outer::Inner i;

    o.display();
    i.show();

    return 0;
}
