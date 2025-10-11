#include <iostream>
#include <string>
using namespace std;

// The Base Class (Parent)
class Vehicle
{
public:
    string brand;

    void startEngine()
    {
        cout << "Engine has started." << endl;
    }
};

// The Derived Class (Child)
// The syntax ": public Vehicle" means Car inherits publicly from Vehicle.
class Car : public Vehicle
{
public:
    int numDoors;

    void honk()
    {
        cout << "Beep beep!" << endl;
    }
};

int main()
{
    Car myCar;

    // We can access members from the Base class (Vehicle)
    myCar.brand = "Ford";
    myCar.startEngine();

    // We can also access members from the Derived class (Car)
    myCar.numDoors = 4;
    myCar.honk();

    cout << "My car is a " << myCar.brand << " with " << myCar.numDoors << " doors." << endl;

    return 0;
}