#include <iostream>
using namespace std;

// This function receives the memory address of the original variable.
void modifyWithValue(int *ptr)
{
    cout << "  Inside function, pointer received address: " << ptr << endl;
    *ptr = 100; // Dereferencing the pointer modifies the original value.
    cout << "  Inside function, value at address changed to: " << *ptr << endl;
}

int main()
{
    int myNumber = 10;

    cout << "Before calling function, myNumber = " << myNumber << endl;
    modifyWithValue(&myNumber);                                        // We pass the address of myNumber.
    cout << "After calling function, myNumber = " << myNumber << endl; // It's changed!

    return 0;
}