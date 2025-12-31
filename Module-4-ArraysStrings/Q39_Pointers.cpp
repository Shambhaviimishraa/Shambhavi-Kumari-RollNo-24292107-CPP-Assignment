#include <iostream>
using namespace std;

int main() 
{
    int num = 10;         
    int *ptr;              

    ptr = &num;            

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored in pointer ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

   
    *ptr = 20;
    cout << "New value of num after changing through pointer: " << num << endl;

    return 0;
}
