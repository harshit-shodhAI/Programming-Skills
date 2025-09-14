#include <iostream>
using namespace std;

int main()
{
    // allocate a single int
    int *ip = new int; // memory on heap
    *ip = 123;
    cout << "Dynamically allocated int *ip -> *ip = " << *ip << endl;
    delete ip; // free memory
    ip = nullptr;

    // allocate and initialize a double
    double *dp = new double(3.14159);
    cout << "Dynamically allocated double *dp = " << *dp << endl;
    delete dp;
    dp = nullptr;

    // good practice: always delete what you new and set pointer to nullptr

    return 0;
}
