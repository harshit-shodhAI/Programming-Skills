#include <iostream>
#include <string>
using namespace std;

// Base Class
class Animal
{
private:
    // Inaccessible to anyone outside this class, including derived classes.
    int age;

protected:
    // Accessible only by this class and its derived classes.
    string name;

public:
    // Accessible from anywhere.
    void eat()
    {
        cout << "This animal is eating." << endl;
    }

    // A public method to set the private age
    void setAge(int a)
    {
        age = a;
    }
};

// Derived Class
class Dog : public Animal
{
public:
    void introduce(string dogName)
    {
        // Derived class CAN access the 'protected' member of the base class.
        name = dogName;

        // Derived class CANNOT access the 'private' member of the base class.
        // age = 2; // This would cause a COMPILE ERROR

        cout << "My name is " << name << "." << endl;
    }
};

int main()
{
    Dog myDog;

    // We can call public methods from the base class.
    myDog.eat();

    // We CANNOT access protected or private members from main.
    // myDog.name = "Rex"; // COMPILE ERROR: 'name' is protected
    // myDog.age = 5;      // COMPILE ERROR: 'age' is private

    // We can call a public method of the derived class that accesses the protected member.
    myDog.introduce("Rex");

    return 0;
}