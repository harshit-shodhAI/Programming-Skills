#include <iostream>
#include <string>
using namespace std;

class Logger
{
private:
    string id;

public:
    // Constructor
    Logger(string identifier)
    {
        id = identifier;
        cout << "-> Logger '" << id << "' created." << endl;
    }

    // Destructor: Note the tilde (~) prefix. It has no parameters and no return type.
    ~Logger()
    {
        cout << "<- Logger '" << id << "' destroyed." << endl;
    }
};

int main()
{
    cout << "Entering main function." << endl;
    Logger mainLogger("MainScope");

    { // Entering a new scope block
        cout << "  Entering inner scope." << endl;
        Logger innerLogger("InnerScope");
        cout << "  Leaving inner scope." << endl;
    } // innerLogger is destroyed here as its scope ends

    cout << "Leaving main function." << endl;
    return 0;
} // mainLogger is destroyed here as main ends