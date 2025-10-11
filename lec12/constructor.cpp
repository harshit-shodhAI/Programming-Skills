#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double height;

public:
    // 1. Default Constructor: Called when no arguments are provided.
    Rectangle()
    {
        width = 1.0;
        height = 1.0;
        cout << "Default constructor called. Created a 1x1 rectangle." << endl;
    }

    // 2. Parameterized Constructor: Called when arguments are provided.
    Rectangle(double w, double h)
    {
        width = w;
        height = h;
        cout << "Parameterized constructor called. Created a " << w << "x" << h << " rectangle." << endl;
    }

    double getArea()
    {
        return width * height;
    }
};

int main()
{
    // Creating an object using the default constructor
    Rectangle r1;
    cout << "Area of r1: " << r1.getArea() << endl
         << endl;

    // Creating an object using the parameterized constructor
    Rectangle r2(5.0, 3.0);
    cout << "Area of r2: " << r2.getArea() << endl;

    return 0;
}