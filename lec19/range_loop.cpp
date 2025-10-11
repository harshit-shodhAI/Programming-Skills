#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    // --- Example 1: Iterating over a vector ---
    cout << "--- Vector Example ---" << endl;
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Reading elements:" << endl;
    // 'num' will be a copy of each element in 'numbers'.
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "\nModifying elements (using a reference):" << endl;
    // 'num' is now a reference to each element, allowing modification.
    for (int &num : numbers)
    {
        num *= 2; // Double each element
    }

    // Print the modified vector
    for (int num : numbers)
    {
        cout << num << " ";
    }
    cout << endl;

    // --- Example 2: Iterating over a map ---
    cout << "\n--- Map Example ---" << endl;
    map<string, int> scores = {{"Alice", 95}, {"Bob", 88}};

    // Use 'const auto&' for efficient, read-only access to complex types like pairs.
    for (const auto &pair : scores)
    {
        cout << pair.first << " has a score of " << pair.second << endl;
    }

    return 0;
}