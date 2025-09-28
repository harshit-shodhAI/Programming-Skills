#include <iostream>
using namespace std;

// Function Definition:
// This function is defined before main() so the compiler knows about it.
// It takes two integers as input and returns the integer sum.
int add(int a, int b) {
    return a + b; // Returns the result to the caller
}

int main() {
    int x = 5;
    int y = 10;

    // Function Call:
    // We call the 'add' function, passing 'x' and 'y' as arguments.
    int sum = add(x, y);

    cout << "The sum of " << x << " and " << y << " is: " << sum << endl;

    return 0;
}