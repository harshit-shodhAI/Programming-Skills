#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a; // p points to a

    cout << "a = " << a << ", p = " << p << ", *p = " << *p << endl;

    // change value via pointer
    *p = 10;
    cout << "After *p = 10 -> a = " << a << endl;

    // reassign pointer to another variable
    int b = 20;
    p = &b;
    cout << "p reassigned -> p = " << p << ", *p = " << *p << endl;

    // nullptr and safety check
    p = nullptr;
    if (p == nullptr)
    {
        cout << "p is nullptr — cannot dereference" << endl;
    }

    return 0;
}
