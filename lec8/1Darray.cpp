#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize a fixed-size array
    int scores[5] = {88, 92, 77, 95, 81};
    int size = 5;

    cout << "Initial scores:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << "scores[" << i << "] = " << scores[i] << endl;
    }

    // Modify an element
    scores[2] = 80; // Changed 77 to 80
    cout << "\nAfter modification:" << endl;
    cout << "scores[2] = " << scores[2] << endl;

    // Note: C-style arrays have a fixed size at compile time.
    // The size cannot be changed during program execution.

    return 0;
}