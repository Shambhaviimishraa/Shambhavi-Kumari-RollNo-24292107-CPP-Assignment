#include <iostream>
using namespace std;

class ThisDemo
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
        cout << "Value: " << x << endl;
    }
};

int main()
{
    ThisDemo obj;
    obj.setValue(10);
    obj.display();
    return 0;
}
