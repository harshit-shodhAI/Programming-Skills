#include <iostream>
using namespace std;

class Shape
{
public:
    // By adding 'virtual', we enable dynamic binding.
    virtual void draw()
    {
        cout << "Drawing a generic Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    // 'override' is an optional but highly recommended keyword.
    // It makes the compiler check that you are correctly overriding a base class virtual function.
    void draw() override
    {
        cout << "Drawing a Circle" << endl;
    }
};

int main()
{
    Shape *shape_ptr;
    Circle myCircle;

    shape_ptr = &myCircle;

    // SOLUTION: Now, this calls the correct Circle::draw() method.
    // At run-time, the program follows the pointer and sees it points to a Circle object,
    // so it calls the overridden version of the function.
    cout << "Calling draw() using base class pointer: ";
    shape_ptr->draw();

    return 0;
}