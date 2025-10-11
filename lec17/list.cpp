#include <iostream>
#include <list>
using namespace std;

void printList(const list<int> &l)
{
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    list<int> myList = {10, 20, 40, 50};
    cout << "Initial list: ";
    printList(myList);

    // Lists are efficient at inserting in the middle.
    // Let's find the iterator to '40' and insert '30' before it.
    auto it = myList.begin();
    ++it; // points to 20
    ++it; // points to 40
    myList.insert(it, 30);

    cout << "After inserting 30: ";
    printList(myList);

    // They are also good at removing elements.
    myList.remove(40); // Removes all occurrences of 40
    cout << "After removing 40: ";
    printList(myList);

    // You can also push to the front and back.
    myList.push_front(5);
    myList.push_back(60);
    cout << "After push_front and push_back: ";
    printList(myList);

    return 0;
}