#include <iostream>
#include <utility> // Required for std::pair
#include <string>

using namespace std;

// A function that returns two values using a pair.
pair<string, int> getStudentInfo()
{
    return {"Alice", 12345};
}

int main()
{
    pair<string, double> product("Laptop", 1200.99);

    // Access elements using .first and .second
    cout << "Product: " << product.first << endl;
    cout << "Price: $" << product.second << endl;

    // --- Using a pair to receive multiple return values ---
    pair<string, int> student = getStudentInfo();
    cout << "\nStudent: " << student.first << ", ID: " << student.second << endl;

    // --- C++17 Structured Bindings (even cleaner) ---
    // This automatically unpacks the pair into named variables.
    auto [studentName, studentID] = getStudentInfo();
    cout << "Student (unpacked): " << studentName << ", ID: " << studentID << endl;

    return 0;
}