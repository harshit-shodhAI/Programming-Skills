#include <iostream>
using namespace std;

// This function might cause an error, so it's designed to throw an exception.
double divide(int numerator, int denominator)
{
    if (denominator == 0)
    {
        // An error has occurred. Throw an exception.
        // Here, we are throwing a simple string literal.
        throw "ERROR: Cannot divide by zero.";
    }
    return static_cast<double>(numerator) / denominator;
}

int main()
{
    cout << "Attempting to divide..." << endl;

    try
    {
        // The 'try' block contains the code we want to monitor for errors.
        double result1 = divide(10, 2);
        cout << "10 / 2 = " << result1 << endl;

        // This next line will cause an exception to be thrown.
        double result2 = divide(10, 0);
        cout << "10 / 0 = " << result2 << endl; // This line will never be reached.
    }
    catch (const char *error_message)
    {
        // The 'catch' block is the error handler.
        // The type of the caught variable must match the type that was thrown.
        cout << "An exception was caught!" << endl;
        cout << error_message << endl;
    }

    cout << "\nThe program continues to run after the exception was handled." << endl;
    return 0;
}