#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> mySet;

    // Insert elements in a random order
    mySet.insert(50);
    mySet.insert(20);
    mySet.insert(80);
    mySet.insert(20); // This is a duplicate and will be ignored.

    cout << "Elements in the set (always sorted): ";
    for (int val : mySet)
    {
        cout << val << " ";
    }
    cout << endl;

    // Check if an element exists using find()
    int key = 80;
    if (mySet.find(key) != mySet.end())
    {
        cout << key << " was found in the set." << endl;
    }
    else
    {
        cout << key << " was not found in the set." << endl;
    }

    // Remove an element
    mySet.erase(20);
    cout << "Set after erasing 20: ";
    for (int val : mySet)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}