#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int i;

    cout << "Enter 5 elements of the array:" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are:" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
