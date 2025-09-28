#include <iostream>
#include <string>
#include <algorithm> // for std::swap
using namespace std;

// Function to generate permutations using backtracking.
// 'str' is the string we're permuting.
// 'index' is the current position we are fixing.
void findPermutations(string &str, int index)
{
    cout << string(index * 2, ' ') << "Permuting from index " << index << " for string: " << str << endl;

    // Base Case: If we've fixed characters for all positions, we found a permutation.
    if (index >= str.length())
    {
        cout << string(index * 2, ' ') << "==> Found a permutation: " << str << endl;
        return;
    }

    // Loop through the remaining characters to place at the current 'index'.
    for (int i = index; i < str.length(); ++i)
    {
        // 1. Make a choice: Swap the current character with the character at 'index'.
        swap(str[index], str[i]);
        cout << string(index * 2, ' ') << "  CHOICE: Swapped " << str[index] << " and " << str[i] << ". String is now " << str << ". Recursing." << endl;

        // 2. Explore: Recurse for the rest of the string.
        findPermutations(str, index + 1);

        // 3. Backtrack: Undo the choice by swapping back to the original state.
        // This is crucial for exploring other possibilities.
        swap(str[index], str[i]);
        cout << string(index * 2, ' ') << "  BACKTRACK: Swapped back. String is now " << str << "." << endl;
    }
}

int main()
{
    string myString = "AB";
    cout << "Finding permutations for \"" << myString << "\":" << endl;
    findPermutations(myString, 0);
    cout << "\nDone." << endl;
    return 0;
}