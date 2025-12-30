#include <iostream>
using namespace std;

int main()
{
    int i;

    cout << "Demonstrating continue statement:" << endl;
    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;   
        }
        cout << i << " ";
    }

    cout << endl << endl;

    cout << "Demonstrating break statement:" << endl;
    for (i = 1; i <= 5; i++)
    {
        if (i == 4)
        {
            break;     
        }
        cout << i << " ";
    }

    return 0;
}
