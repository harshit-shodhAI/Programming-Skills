#include <iostream>
using namespace std;

class Widget
{
private:
    // 1. Declaration of the static member inside the class.
    // It is shared by all Widget objects.
    static int object_count;
    int id;

public:
    Widget()
    {
        // When a new Widget is created, increment the shared counter.
        object_count++;
        id = object_count;
        cout << "Widget " << id << " created. Total widgets: " << object_count << endl;
    }

    ~Widget()
    {
        // When a Widget is destroyed, decrement the shared counter.
        cout << "Widget " << id << " destroyed. Total widgets remaining: " << object_count - 1 << endl;
        object_count--;
    }
};

// 2. Definition and initialization of the static member outside the class.
// This line allocates the memory for the shared variable.
int Widget::object_count = 0;

int main()
{
    cout << "Entering main..." << endl;
    Widget w1;
    Widget w2;

    {
        cout << "\nEntering an inner scope..." << endl;
        Widget w3;
        cout << "Leaving inner scope..." << endl;
    } // w3 is destroyed here, destructor is called.

    cout << "\nLeaving main..." << endl;
    return 0;
} // w1 and w2 are destroyed here.