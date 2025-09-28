#include <iostream>
#include <string>
using namespace std;

int factorial(int n, int depth)
{
    // Print statement to trace the function call (the "winding" phase)
    cout << string(depth * 2, ' ') << "-> factorial(" << n << ")" << endl;

    // Base Case: The condition that stops recursion.
    if (n <= 1)
    {
        cout << string(depth * 2, ' ') << "<- Base case hit. Returning 1." << endl;
        return 1;
    }

    // Recursive Step: The function calls itself with a smaller problem.
    int result = n * factorial(n - 1, depth + 1);

    // Print statement to trace the return value (the "unwinding" phase)
    cout << string(depth * 2, ' ') << "<- Returning " << result << " from factorial(" << n << ")" << endl;
    return result;
}

int main()
{
    cout << "Calculating factorial(4):" << endl;
    int finalResult = factorial(4, 0);
    cout << "\nFinal Result: " << finalResult << endl;
    return 0;
}