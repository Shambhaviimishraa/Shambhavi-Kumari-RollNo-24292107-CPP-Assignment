#include <iostream>
using namespace std;

class StaticDemo
{
private:
    static int count;

public:
    StaticDemo()
    {
        count++;
    }

    static void display()
    {
        cout << "Number of objects created: " << count << endl;
    }
};

int StaticDemo::count = 0;

int main()
{
    StaticDemo s1, s2, s3;
    StaticDemo::display();
    return 0;
}
