#include <iostream>
#include <string>
using namespace std;

class Point
{
private:
    int x, y;

public:
    // Parameterized constructor
    Point(int x_val, int y_val)
    {
        x = x_val;
        y = y_val;
        cout << "Parameterized constructor called for Point(" << x << ", " << y << ")" << endl;
    }

    // Copy Constructor: Takes a constant reference to another object of the same class.
    Point(const Point &other)
    {
        x = other.x;
        y = other.y;
        cout << "*** Copy constructor called to create a copy of Point(" << other.x << ", " << other.y << ")" << endl;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ")";
    }
};

// A function that takes a Point object BY VALUE, which triggers the copy constructor.
void printPoint(Point p)
{
    cout << "Point printed from function: ";
    p.display();
    cout << endl;
}

int main()
{
    Point p1(10, 20); // Parameterized constructor

    cout << "\n--- Initializing p2 from p1 ---" << endl;
    Point p2 = p1; // Copy constructor is called here

    cout << "\n--- Passing p1 to a function by value ---" << endl;
    printPoint(p1); // Copy constructor is called again for the function parameter

    cout << "\n--- End of main ---" << endl;
    return 0;
}