#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> studentScores;

    // Insert key-value pairs
    studentScores["Alice"] = 95;
    studentScores["Bob"] = 88;
    studentScores.insert(make_pair("Charlie", 92));

    // Inserting with an existing key updates the value
    studentScores["Alice"] = 96;

    // Accessing a value by its key
    cout << "Bob's score is: " << studentScores["Bob"] << endl;

    // Iterate through the map (will be sorted by key)
    cout << "\nAll student scores:" << endl;
    for (const auto &pair : studentScores)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Check if a key exists
    string searchName = "David";
    if (studentScores.find(searchName) == studentScores.end())
    {
        cout << "\n"
             << searchName << " is not in the map." << endl;
    }

    return 0;
}