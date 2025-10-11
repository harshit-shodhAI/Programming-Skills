#include <iostream>
#include <stdexcept> // Required for standard exception types like std::runtime_error

using namespace std;

// A more robust function that throws a standard exception object.
void checkValue(int value)
{
    if (value < 0)
    {
        // std::invalid_argument is a standard exception type for bad function arguments.
        throw std::invalid_argument("Value must be non-negative.");
    }
    if (value > 100)
    {
        // std::out_of_range is another standard type.
        throw std::out_of_range("Value must be 100 or less.");
    }
    cout << "Value " << value << " is valid." << endl;
}

int main()
{
    try
    {
        checkValue(50);
        checkValue(-5);  // This will throw an exception.
        checkValue(200); // This line will not be reached.
    }
    catch (const std::exception &e)
    {
        // This single catch block can handle any standard C++ exception.
        // We catch by const reference, which is standard practice.
        cout << "Caught an exception: " << e.what() << endl;
        // The .what() method returns the descriptive string provided when the exception was thrown.
    }

    return 0;
}