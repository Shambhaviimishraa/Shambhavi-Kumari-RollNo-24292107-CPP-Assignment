#include <iostream>
using namespace std;

class Area
{
private:
    int length, breadth;

public:
    void read()
    {
        cin >> length >> breadth;
    }

    void display()
    {
        cout << length * breadth << endl;
    }
};

int main()
{
    Area obj;
    obj.read();
    obj.display();
    return 0;
}
