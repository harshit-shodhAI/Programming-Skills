#include <iostream>
using namespace std;

int main()
{
    int x = 7;
    int *p = &x;      // level 1
    int **pp = &p;    // level 2
    int ***ppp = &pp; // level 3

    cout << "Initial x = " << x << endl;
    cout << "*p     = " << *p << endl;
    cout << "**pp   = " << **pp << endl;
    cout << "***ppp = " << ***ppp << endl;

    // modify using double pointer
    **pp = 42;
    cout << "After **pp = 42 -> x = " << x << endl;

    // modify using triple pointer
    ***ppp = 99;
    cout << "After ***ppp = 99 -> x = " << x << endl;

    // show addresses to clarify levels
    cout << "addresses: &x=" << &x << ", p=" << p
         << ", &p=" << &p << ", pp=" << pp << ", &pp=" << &pp << endl;

    return 0;
}
