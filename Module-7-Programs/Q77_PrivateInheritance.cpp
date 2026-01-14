#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "This is Base class function" << endl;
    }
};

class Derived : private Base {
public:
    void display() {
        show();
    }
};

int main() {
    Derived obj;

    obj.display(); 

    return 0;
}
