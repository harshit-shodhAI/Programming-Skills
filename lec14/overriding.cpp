#include <iostream>
using namespace std;

class Shape
{
public:
    // This is NOT virtual
    void draw()
    {
        cout << "Drawing a generic Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    // This function "overrides" the base class version
    void draw()
    {
        cout << "Drawing a Circle" << endl;
    }
};

int main()
{
    Shape *shape_ptr; // A pointer to the base class
    Circle myCircle;

    shape_ptr = &myCircle;

    // PROBLEM: This calls the Shape::draw() method, not the Circle::draw() method.
    // The compiler binds the call based on the pointer's type (Shape*).
    cout << "Calling draw() using base class pointer: ";
    shape_ptr->draw();

    return 0;
}