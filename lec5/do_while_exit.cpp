#include <iostream>
using namespace std;

int main()
{
    int i = 20;

    cout << "Using while loop:" << endl;
    i = 20;
    while (i < 10)
    {
        cout << "This will not run." << endl;
        i++;
    }

    cout << "Using for loop:" << endl;
    for (int j = 20; j < 10; j++)
    {
        cout << "This will not run." << endl;
    }

    cout << "Using do-while loop:" << endl;
    i = 20;
    do
    {
        cout << "This runs at least once. i = " << i << endl;
        i++;
    } while (i < 10);

    return 0;
}
