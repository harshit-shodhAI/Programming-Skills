#include <iostream>
#include <memory> // Required for smart pointers

using namespace std;

class MyResource
{
public:
    MyResource() { cout << "MyResource created." << endl; }
    ~MyResource() { cout << "MyResource destroyed." << endl; }
    void doWork() { cout << "Doing work..." << endl; }
};

int main()
{
    cout << "Entering a scope..." << endl;
    {
        // Use std::make_unique to create a MyResource object on the heap
        // and have a unique_ptr manage it. This is the modern, safe way.
        unique_ptr<MyResource> ptr1 = make_unique<MyResource>();

        // Use the -> operator just like a raw pointer to access members.
        ptr1->doWork();

        // You cannot copy a unique_ptr because that would violate exclusive ownership.
        // unique_ptr<MyResource> ptr2 = ptr1; // COMPILE ERROR!

        cout << "unique_ptr is about to go out of scope..." << endl;
    } // ptr1 goes out of scope here, and automatically calls delete on its managed object.
      // The MyResource destructor is called automatically.

    cout << "Scope has been left. No memory leaks!" << endl;
    return 0;
}