#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number (0–5): ";
    cin >> n;

    switch (n)
    {
    case 0:
        cout << "Zero" << endl;
        break;
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    case 4:
        cout << "Four" << endl;
        break;
    case 5:
        cout << "Five" << endl;
        break;
    default:
        cout << "Out of range" << endl;
        break;
    }

    return 0;
}
