#include <iostream>
#include <string> // Required for std::string
using namespace std;

int main()
{
    // Declare and initialize a string object. It manages its own memory.
    string s1 = "Hello";
    string s2 = "World";

    // Concatenation is easy and safe with the '+' operator
    string message = s1 + ", " + s2 + "!";
    cout << message << endl;

    // Get length easily
    cout << "Message length: " << message.length() << endl;

    // Reading a full line of text is simple
    string fullName;
    cout << "\nEnter your full name: ";
    getline(cin, fullName); // Reads until the user hits Enter
    cout << "Nice to meet you, " << fullName << "!" << endl;

    return 0;
}