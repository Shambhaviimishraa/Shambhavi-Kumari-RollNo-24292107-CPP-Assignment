#include <iostream>
using namespace std;

class DynamicMemory
{
private:
    int* ptr;
    int size;

public:
    DynamicMemory(int n)
    {
        size = n;
        ptr = new int[size];
        cout << "Memory allocated for " << size << " integers." << endl;
    }

    void input()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> ptr[i];
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }

    ~DynamicMemory()
    {
        delete[] ptr;
        cout << "Memory deallocated." << endl;
    }
};

int main()
{
    DynamicMemory d(5);
    d.input();
    d.display();
    return 0;
}
