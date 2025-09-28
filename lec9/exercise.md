Write a program for each of the following tasks:

1.  **Triple Swap:**

    - Write a single C++ program that contains three distinct `swap` functions.
    - `void swap_by_value(int a, int b);` - This function will _not_ work as intended, and that's the point. Print the values inside the function and after the call in `main` to show the original variables are unchanged.
    - `void swap_by_pointer(int* a, int* b);` - This function should correctly swap the values of the original variables using pointers.
    - `void swap_by_reference(int& a, int& b);` - This function should correctly swap the values using references.
    - In `main`, call all three functions and demonstrate their effects.

2.  **String Utility Functions:**

    - Write two functions:
      - `int countVowels(const string& str);` - This function takes a string by constant reference (to be efficient and prevent modification) and returns the number of vowels (a, e, i, o, u, case-insensitive).
      - `void reverseString(string& str);` - This function takes a string by reference and reverses it in-place.
    - In `main`, get a string from the user, call both functions, and print the vowel count and the reversed string.

3.  **Overloaded `processData` Function:**
    - Write three overloaded functions named `processData`.
    - `void processData(int n);` - Prints "Processing integer: [n], its square is [n*n]".
    - `void processData(double d);` - Prints "Processing double: [d], its square root is [sqrt(d)]". (You'll need to `#include <cmath>`).
    - `void processData(const string& s);` - Prints "Processing string: [s], its length is [s.length()]".
    - In `main`, call `processData` with an integer, a double, and a string to demonstrate that the correct version is automatically chosen.
