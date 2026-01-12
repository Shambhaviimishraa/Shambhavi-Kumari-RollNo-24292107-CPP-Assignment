#include <iostream>
using namespace std;


class Person {
public:
    void showName() {
        cout << "Name: Somya" << endl;
    }
};


class Student : public Person {
public:
    void showCourse() {
        cout << "Course: B.Tech Computer Science" << endl;
    }
};

int main() {
    Student s;
    s.showName();    
    s.showCourse();  
    return 0;
}
