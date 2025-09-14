#include <iostream>
#include <cstring> // For strlen() and strcpy()
using namespace std;

int main()
{
    // "Hello" is 5 chars, but requires 6 bytes for the null terminator '\0'
    char greeting[6] = "Hello";

    cout << "Greeting: " << greeting << endl;
    cout << "Length (using strlen): " << strlen(greeting) << endl;

    // C-style strings are dangerous if you don't manage memory carefully
    char buffer[10];
    strcpy(buffer, "Too long!"); // This is fine
    cout << "Buffer: " << buffer << endl;

    // strcpy(buffer, "This string is way too long"); // DANGER! This would cause a buffer overflow.

    return 0;
}