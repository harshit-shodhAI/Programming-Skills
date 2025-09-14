#include <iostream>
#include <vector> // Required for std::vector
using namespace std;

int main()
{
    // Declare a vector (a dynamic array)
    vector<int> numbers;

    cout << "Initial size: " << numbers.size() << endl;

    // Add elements. The vector grows automatically.
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Size after adding 3 elements: " << numbers.size() << endl;
    cout << "Elements:" << endl;

    // Easiest way to loop: range-based for loop
    for (int num : numbers)
    {
        cout << num << endl;
    }

    // Accessing elements is same as arrays
    cout << "\nElement at index 1: " << numbers[1] << endl;

    // .at() is a safer way to access (throws an error if out of bounds)
    cout << "Element at index 2 (safe access): " << numbers.at(2) << endl;

    return 0;
}