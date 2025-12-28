#include <iostream>
using namespace std;

int main()
{
    // Area of Circle
    float radius, circleArea;
    cout << "Enter radius of circle: ";
    cin >> radius;
    circleArea = 3.14 * radius * radius;
    cout << "Area of Circle = " << circleArea << endl;

    // Area of Triangle
    float base, height, triangleArea;
    cout << "\nEnter base of triangle: ";
    cin >> base;
    cout << "Enter height of triangle: ";
    cin >> height;
    triangleArea = 0.5 * base * height;
    cout << "Area of Triangle = " << triangleArea << endl;

    // Area of Rectangle
    float length, breadth, rectangleArea;
    cout << "\nEnter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;
    rectangleArea = length * breadth;
    cout << "Area of Rectangle = " << rectangleArea << endl;

    return 0;
}
