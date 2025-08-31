#include <iostream>
using namespace std;

// Global const variable (cannot be modified)
const int globalConst = 100;

// Simulating a hardware register (volatile)
volatile int hardwareRegister = 10;

int main()
{
    // -------------------------------
    // 1. const
    // -------------------------------
    const int x = 42; // must be initialized, cannot be changed later
    cout << "Const int x: " << x << endl;
    // x = 50;

    // -------------------------------
    // 2. volatile
    // -------------------------------
    cout << "\n--- volatile demo ---\n";
    cout << "Initial hardwareRegister: " << hardwareRegister << endl;

    // Normally, compiler might optimize this away if it thinks variable never changes
    // But 'volatile' forces the compiler to re-read its value every time
    hardwareRegister = 20;
    cout << "Modified hardwareRegister: " << hardwareRegister << endl;

    // -------------------------------
    // 3. constexpr (C++11+)
    // -------------------------------
    constexpr int y = 5 + 10; // evaluated at compile time
    cout << "\nConstexpr y: " << y << endl;

    // Example: using constexpr for array size
    constexpr int size = 3;
    int arr[size] = {1, 2, 3};
    cout << "Array created with constexpr size = ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
