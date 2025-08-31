#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    int mx;
    if (a >= b)
    {
        if (a >= c)
            mx = a;
        else
            mx = c;
    }
    else
    {
        if (b >= c)
            mx = b;
        else
            mx = c;
    }

    cout << "Maximum is: " << mx << endl;
    return 0;
}
