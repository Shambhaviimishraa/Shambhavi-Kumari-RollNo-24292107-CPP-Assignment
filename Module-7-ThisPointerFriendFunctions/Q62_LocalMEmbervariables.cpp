#include <iostream>
using namespace std;

class Demo
{
private:
    int x;

public:
    void setValue(int x)  
    {
        this->x = x; 
    }

    void display()
    {
        cout << "Member variable x: " << x << endl;
    }
};

int main()
{
    Demo d;
    d.setValue(25);
    d.display();
    return 0;
}
