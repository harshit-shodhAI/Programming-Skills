#include <iostream>
using namespace std;

int main()
{
    // -------------------------------
    // 1. Implicit type casting
    // -------------------------------
    int a = 65;   // integer
    char ch = a;  // implicit conversion (int → char)
    double d = a; // implicit conversion (int → double)

    cout << "--- Implicit Casting ---\n";
    cout << "int a = " << a << endl;
    cout << "char ch = " << ch << " (from int 65)" << endl;
    cout << "double d = " << d << " (from int 65)" << endl;

    // -------------------------------
    // 2. Explicit type casting (C-style)
    // -------------------------------
    double pi = 3.14159;
    int intPi = (int)pi; // C-style cast (truncates decimal part)

    cout << "\n--- Explicit Casting (C-style) ---\n";
    cout << "double pi = " << pi << endl;
    cout << "int intPi = " << intPi << " (after casting)" << endl;

    // -------------------------------
    // 3. static_cast (recommended in C++)
    // -------------------------------
    int num = 97;
    char letter = static_cast<char>(num);    // int → char
    double div = static_cast<double>(5) / 2; // int → double to avoid integer division

    cout << "\n--- static_cast ---\n";
    cout << "char letter = " << letter << " (from int 97)" << endl;
    cout << "double div = " << div << " (5/2 with casting)" << endl;

    return 0;
}
