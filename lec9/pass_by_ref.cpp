#include <iostream>
using namespace std;

// 'ref' is a reference (an alias) to the original variable.
void modifyWithReference(int &ref)
{
    cout << "  Inside function, reference has value: " << ref << endl;
    ref = 100; // Any change to the reference changes the original variable.
    cout << "  Inside function, reference changed to: " << ref << endl;
}

int main()
{
    int myNumber = 10;

    cout << "Before calling function, myNumber = " << myNumber << endl;
    modifyWithReference(myNumber);                                     // No special syntax needed for the call.
    cout << "After calling function, myNumber = " << myNumber << endl; // It's changed!

    return 0;
}