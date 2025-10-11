#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    int value_to_find = 30;

    // find() returns an iterator to the first occurrence of the value.
    // If the value is not found, it returns the end() iterator.
    auto it = find(v.begin(), v.end(), value_to_find);

    if (it != v.end())
    {
        cout << "Found " << *it << " in the vector." << endl;
    }
    else
    {
        cout << value_to_find << " was not found." << endl;
    }

    value_to_find = 99;
    it = find(v.begin(), v.end(), value_to_find);
    if (it == v.end())
    {
        cout << value_to_find << " was not found." << endl;
    }

    return 0;
}