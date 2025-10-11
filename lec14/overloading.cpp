#include <iostream>
#include <string>
using namespace std;

class Printer
{
public:
    // A "print" function for integers
    void print(int val)
    {
        cout << "Printing an integer: " << val << endl;
    }

    // An overloaded "print" function for doubles
    void print(double val)
    {
        cout << "Printing a double: " << val << endl;
    }

    // An overloaded "print" function for strings
    void print(const string &val)
    {
        cout << "Printing a string: \"" << val << "\"" << endl;
    }
};

int main()
{
    Printer myPrinter;

    // The compiler knows exactly which function to call at compile time.
    myPrinter.print(100);
    myPrinter.print(3.14);
    myPrinter.print("Hello, C++");

    return 0;
}