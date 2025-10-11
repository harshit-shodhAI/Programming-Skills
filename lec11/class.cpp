#include <iostream>
#include <string>
using namespace std;

// Class Definition (The Blueprint)
class Car
{
public:
    // Member Variables (Data/Attributes)
    string brand;
    string model;
    int year;

    // Member Function (Behavior/Method)
    void displayInfo()
    {
        cout << "Car Info: " << year << " " << brand << " " << model << endl;
    }
};

int main()
{
    // Object Creation (An Instance of the Blueprint)
    Car myCar;

    // Accessing and modifying member variables using the dot (.) operator
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.year = 2021;

    // Calling a member function
    myCar.displayInfo();

    Car anotherCar;
    anotherCar.brand = "Honda";
    anotherCar.model = "Civic";
    anotherCar.year = 2022;
    anotherCar.displayInfo();

    return 0;
}