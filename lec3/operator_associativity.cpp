#include <iostream>
using namespace std;

int main()
{
    int a = 20, b = 10, c = 5;

    // Left-to-right associativity for arithmetic operators
    int result1 = a - b - c; // (a - b) - c
    int result2 = a / b / c; // (a / b) / c

    // Right-to-left associativity for assignment operators
    int x, y, z;
    x = y = z = 5; // Same as: x = (y = (z = 5))

    cout << "--- Operator Associativity Demo ---" << endl;
    cout << "a - b - c = " << result1 << endl;
    cout << "a / b / c = " << result2 << endl;
    cout << "x = y = z = 5 -> x=" << x << ", y=" << y << ", z=" << z << endl;

    return 0;
}
