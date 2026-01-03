#include <iostream>
using namespace std;

class Sample
{
private:
    int x;

public:
    Sample(int val)
    {
        x = val;
    }

    friend void show(Sample s); 
};

void show(Sample s)
{
    cout << "Private data x: " << s.x << endl;
}

int main()
{
    Sample obj(50);
    show(obj);
    return 0;
}
