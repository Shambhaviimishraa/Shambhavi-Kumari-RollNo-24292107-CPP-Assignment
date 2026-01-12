#include <iostream>
using namespace std;


class Person {
public:
    void showName() {
        cout << "Name: Shambhavi" << endl;
    }
};


class Student : public Person {
public:
    void showRoll() {
        cout << "Roll No: 101" << endl;
    }
};


class Result : public Student {
public:
    void showResult() {
        cout << "Result: Passed" << endl;
    }
};

int main() {
    Result r;
    r.showName();    
    r.showRoll();    
    r.showResult(); 

    return 0;
}
