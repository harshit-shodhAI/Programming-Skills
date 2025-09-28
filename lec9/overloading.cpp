#include <iostream>
#include <string>
using namespace std;

// A 'print' function for integers.
void print(int value)
{
    cout << "Printing an integer: " << value << endl;
}

// An overloaded 'print' function for doubles.
void print(double value)
{
    cout << "Printing a double: " << value << endl;
}

// An overloaded 'print' function for strings.
void print(string value)
{
    cout << "Printing a string: " << value << endl;
}

int main()
{
    print(42);          // Calls the integer version.
    print(3.14159);     // Calls the double version.
    print("Hello C++"); // Calls the string version.

    return 0;
}