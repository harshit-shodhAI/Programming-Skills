#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    // Declare an iterator for a vector of integers
    vector<int>::iterator it;

    cout << "Traversing vector with an iterator:" << endl;
    // .begin() returns an iterator to the first element.
    // .end() returns an iterator to the position AFTER the last element.
    for (it = v.begin(); it != v.end(); ++it)
    {
        // Use the dereference operator (*) to get the value
        cout << *it << " ";
    }
    cout << endl;

    // Iterators can also be used to modify elements.
    it = v.begin(); // Reset to the beginning
    *it = 11;       // Change the first element
    ++it;
    *it = 22; // Change the second element

    cout << "Vector after modification:" << endl;
    // A range-based for loop is often a simpler alternative for just reading.
    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}