#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    Student s1;

    
    cout << "Enter roll number: ";
    cin >> s1.rollNo;

    cin.ignore(); 
    cout << "Enter name: ";
    cin.getline(s1.name, 50);

    cout << "Enter marks: ";
    cin >> s1.marks;

    cout << "\nStudent Details:" << endl;
    cout << "Roll Number: " << s1.rollNo << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
