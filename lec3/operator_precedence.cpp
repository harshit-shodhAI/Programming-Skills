#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5, c = 2;

    // Expression without parentheses
    int result1 = a + b * c; // * has higher precedence than +
    // Equivalent to: a + (b * c)

    // Expression with parentheses
    int result2 = (a + b) * c; // () changes the evaluation order

    cout << "--- Operator Precedence Demo ---" << endl;
    cout << "a + b * c = " << result1 << endl;
    cout << "(a + b) * c = " << result2 << endl;

    return 0;
}
