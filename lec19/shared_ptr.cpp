#include <iostream>
#include <memory>

using namespace std;

class SharedProject
{
public:
    SharedProject() { cout << "SharedProject created." << endl; }
    ~SharedProject() { cout << "SharedProject destroyed." << endl; }
};

int main()
{
    shared_ptr<SharedProject> p1; // Starts as empty.

    cout << "Entering first scope..." << endl;
    {
        // Use std::make_shared to create the resource.
        shared_ptr<SharedProject> p2 = make_shared<SharedProject>();
        cout << "Reference count: " << p2.use_count() << endl; // Count is 1

        // Share ownership. Both p1 and p2 now point to the same object.
        p1 = p2;
        cout << "Reference count: " << p1.use_count() << endl; // Count is 2
    }
    cout << "Left first scope. p2 was destroyed." << endl;
    cout << "Reference count: " << p1.use_count() << endl; // Count is now 1

    cout << "\nThe project is still alive because p1 still exists." << endl;
    cout << "Leaving main... p1 is about to be destroyed." << endl;

    return 0;
} // p1 goes out of scope here. The reference count becomes 0, and the object is finally deleted.