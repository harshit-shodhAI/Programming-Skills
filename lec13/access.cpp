#include <iostream>
using namespace std;

class Base
{
public:
    int publicMember = 1;

protected:
    int protectedMember = 2;

private:
    int privateMember = 3;
};

// 1. Public Inheritance: The most common type. "is-a" relationship.
class DerivedPublic : public Base
{
    // publicMember is public
    // protectedMember is protected
    // privateMember is inaccessible
};

// 2. Protected Inheritance: Public members of Base become protected.
class DerivedProtected : protected Base
{
    // publicMember is protected
    // protectedMember is protected
    // privateMember is inaccessible
};

// 3. Private Inheritance: All members of Base become private.
class DerivedPrivate : private Base
{
    // publicMember is private
    // protectedMember is private
    // privateMember is inaccessible
};

int main()
{
    DerivedPublic d_pub;
    d_pub.publicMember = 10; // OK: publicMember remains public

    DerivedProtected d_prot;
    // d_prot.publicMember = 20; // COMPILE ERROR: publicMember is now protected

    DerivedPrivate d_priv;
    // d_priv.publicMember = 30; // COMPILE ERROR: publicMember is now private

    cout << "This code demonstrates access rules at compile time." << endl;
    cout << "The most important type to master is 'public' inheritance." << endl;
    return 0;
}