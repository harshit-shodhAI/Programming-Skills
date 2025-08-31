#include <iostream>
using namespace std;

int main()
{
    cout << "For loop with missing initialization:" << endl;
    int i = 1;
    for (; i <= 5; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "For loop with missing condition (infinite if not broken):" << endl;
    i = 1;
    for (;; i++)
    {
        if (i > 5)
            break;
        cout << i << " ";
    }
    cout << endl;

    cout << "For loop with missing increment:" << endl;
    for (int j = 1; j <= 5;)
    {
        cout << j << " ";
        j++;
    }
    cout << endl;

    return 0;
}
