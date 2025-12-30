#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter a number (1–3): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "You selected Option 1";
            break;

        case 2:
            cout << "You selected Option 2";
            break;

        case 3:
            cout << "You selected Option 3";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
