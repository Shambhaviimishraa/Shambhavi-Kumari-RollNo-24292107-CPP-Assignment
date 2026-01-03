#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;

public:
    string name;

    void setRollNo(int r)
    {
        rollNo = r;
    }

    void display()
    {
        cout << name << endl;
        cout << rollNo << endl;
    }
};

int main()
{
    Student s;
    s.name = "Shambhavi";
    s.setRollNo(59);
    s.display();
    return 0;
}

    
