#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float salary;

public:
    string name;

    void read()
    {
        cin >> id;
        cin >> name;
        cin >> salary;
    }

    void display()
    {
        cout << id << endl;
        cout << name << endl;
        cout << salary << endl;
    }
};

int main()
{
    Employee e;
    e.read();
    e.display();
    return 0;
}
