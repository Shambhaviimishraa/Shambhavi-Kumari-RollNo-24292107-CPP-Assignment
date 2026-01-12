#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    Student(int r) {
        roll = r;
    }

    void display() const {  
        cout << "Roll number: " << roll << endl;
    }
};

int main() {
    const Student s(101);  
    s.display();          
    return 0;
}
