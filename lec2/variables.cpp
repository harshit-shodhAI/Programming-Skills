#include <iostream>
#include <string> // for std::string
using namespace std;

// --------------------
// Global variable
// --------------------
int globalVar = 100; // available everywhere in this file

// Function to demonstrate scope
void print()
{
    cout << "Hello World" << endl;
    cout << "Global variable inside function: " << globalVar << endl;
}

int main()
{
    print();

    // -------------------------------
    // 1. Declaration & Initialization
    // -------------------------------
    bool isTrue = true;   // Boolean variable: true (1) or false (0)
    int x = 23;           // Integer variable
    char ch = 'A';        // Character variable (single quotes)
    float y = 45.67f;     // Floating point variable (approx 6–7 digits precision)
    double z = 89.123456; // Double precision float (approx 15 digits precision)

    // -------------------------------
    // 2. Printing values
    // -------------------------------
    cout << "\n--- Variable Values ---\n";
    cout << "Boolean value: " << isTrue << endl;
    cout << "Integer value: " << x << endl;
    cout << "Character value: " << ch << endl;
    cout << "Float value: " << y << endl;
    cout << "Double value: " << z << endl;

    // -------------------------------
    // 3. Variable Scope
    // -------------------------------
    int localVar = 10; // only available inside main
    cout << "\nGlobal variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;

    // -------------------------------
    // 4. sizeof() operator
    // -------------------------------
    cout << "\n--- Size of Variables (in bytes) ---\n";
    cout << "Size of bool: " << sizeof(isTrue) << endl;
    cout << "Size of int: " << sizeof(x) << endl;
    cout << "Size of char: " << sizeof(ch) << endl;
    cout << "Size of float: " << sizeof(y) << endl;
    cout << "Size of double: " << sizeof(z) << endl;

    // -------------------------------
    // 6. Uninitialized variable
    // -------------------------------
    int uninitialized; // value is undefined (garbage)
    cout << "\nUninitialized int (garbage value): " << uninitialized << endl;

    return 0;
}
