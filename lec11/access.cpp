#include <iostream>
using namespace std;

class MyBaseClass
{
public:
    int publicVar = 10; // Accessible from anywhere

private:
    int privateVar = 20; // Accessible only by member functions of this class

protected:
    int protectedVar = 30; // Accessible by this class and its derived classes (more on this in inheritance)

public:
    void accessPrivate()
    {
        // Member functions can access all members of the same class
        cout << "From inside the class, privateVar = " << privateVar << endl;
    }
};

int main()
{
    MyBaseClass obj;

    // Accessing public members: OK
    cout << "obj.publicVar = " << obj.publicVar << endl;

    // Accessing private members: COMPILE ERROR
    // cout << "obj.privateVar = " << obj.privateVar << endl; // Error: privateVar is private
    obj.accessPrivate(); // But we can call a public method that accesses it

    // Accessing protected members: COMPILE ERROR
    // cout << "obj.protectedVar = " << obj.protectedVar << endl; // Error: protectedVar is protected
    cout << "Protected members are inaccessible from main, just like private members." << endl;

    return 0;
}