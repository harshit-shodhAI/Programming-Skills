#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 3;

    // -------------------------------
    // 1. Arithmetic Operators
    // -------------------------------
    cout << "--- Arithmetic Operators ---" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    // -------------------------------
    // 2. Relational Operators
    // -------------------------------
    cout << "\n--- Relational Operators ---" << endl;
    cout << "a > b : " << (a > b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;

    // -------------------------------
    // 3. Logical Operators
    // -------------------------------
    bool x = true, y = false;
    cout << "\n--- Logical Operators ---" << endl;
    cout << "x && y : " << (x && y) << endl;
    cout << "x || y : " << (x || y) << endl;
    cout << "!x : " << (!x) << endl;

    // -------------------------------
    // 4. Assignment Operators
    // -------------------------------
    int c = 5;
    cout << "\n--- Assignment Operators ---" << endl;
    cout << "c = " << c << endl;
    c += 2; // c = c + 2
    cout << "c += 2 -> " << c << endl;
    c -= 1; // c = c - 1
    cout << "c -= 1 -> " << c << endl;
    c *= 3; // c = c * 3
    cout << "c *= 3 -> " << c << endl;
    c /= 2; // c = c / 2
    cout << "c /= 2 -> " << c << endl;
    c %= 4; // c = c % 4
    cout << "c %= 4 -> " << c << endl;

    // -------------------------------
    // 5. Increment / Decrement
    // -------------------------------
    int d = 5;
    cout << "\n--- Increment / Decrement ---" << endl;
    cout << "Initial d = " << d << endl;
    cout << "Post-increment d++ = " << (d++) << " (value after = " << d << ")" << endl;
    cout << "Pre-increment ++d = " << (++d) << " (value now = " << d << ")" << endl;
    cout << "Post-decrement d-- = " << (d--) << " (value after = " << d << ")" << endl;
    cout << "Pre-decrement --d = " << (--d) << " (value now = " << d << ")" << endl;

    return 0;
}
