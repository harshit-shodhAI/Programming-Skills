#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int> &d)
{
    for (int val : d)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    deque<int> d = {10, 20, 30};
    cout << "Initial deque: ";
    printDeque(d);

    // Efficiently add to the back (like a vector)
    d.push_back(40);
    cout << "After push_back(40): ";
    printDeque(d);

    // Efficiently add to the front (unlike a vector)
    d.push_front(0);
    cout << "After push_front(0): ";
    printDeque(d);

    // Efficiently remove from both ends
    d.pop_back();
    d.pop_front();
    cout << "After pop_back and pop_front: ";
    printDeque(d);

    // Also provides random access with []
    cout << "Element at index 1: " << d[1] << endl;

    return 0;
}