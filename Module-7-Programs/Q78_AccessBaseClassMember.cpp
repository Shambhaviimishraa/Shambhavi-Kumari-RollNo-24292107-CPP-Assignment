#include <iostream>
using namespace std;

class Base {
protected:
    int x;

public:
    void setValue() {
        x = 10;
    }
};

class Derived : public Base {
public:
    void showValue() {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    Derived obj;

    obj.setValue();   
    obj.showValue();  

    return 0;
}
