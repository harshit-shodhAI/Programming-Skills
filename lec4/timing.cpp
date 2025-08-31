#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    volatile int counter = 0;

    auto t1 = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i)
    {
        if (x == 0)
        {
            counter += 1;
        }
        else if (x == 1)
        {
            counter += 1;
        }
        else if (x == 2)
        {
            counter += 1;
        }
        else
        {
            counter += 1;
        }
    }
    auto t2 = chrono::high_resolution_clock::now();

    auto t3 = chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i)
    {
        switch (x)
        {
        case 0:
            counter += 1;
            break;
        case 1:
            counter += 1;
            break;
        case 2:
            counter += 1;
            break;
        default:
            counter += 1;
            break;
        }
    }
    auto t4 = chrono::high_resolution_clock::now();

    auto dur_if = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
    auto dur_sw = chrono::duration_cast<chrono::microseconds>(t4 - t3).count();

    cout << "if-else ladder (100000 iterations) took (µs): " << dur_if << endl;
    cout << "switch-case   (100000 iterations) took (µs): " << dur_sw << endl;

    return 0;
}
