#include <iostream>
using namespace std;

// This function receives a copy of the original variable.
void attemptToModify(int value)
{
    cout << "  Inside function, value received: " << value << endl;
    value = 100; // This modification only affects the local copy.
    cout << "  Inside function, value changed to: " << value << endl;
}

int main()
{
    int myNumber = 10;

    cout << "Before calling function, myNumber = " << myNumber << endl;
    attemptToModify(myNumber);
    cout << "After calling function, myNumber = " << myNumber << endl; // Unchanged!

    return 0;
}