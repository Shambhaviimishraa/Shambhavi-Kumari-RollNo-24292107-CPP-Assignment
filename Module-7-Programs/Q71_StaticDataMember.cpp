#include <iostream>
using namespace std;

class Student {
public:
    static int count;   

    Student() {
        count++;
    }

    void display() {
        cout << "Number of students: " << count << endl;
    }
};
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.display();
    return 0;
}
