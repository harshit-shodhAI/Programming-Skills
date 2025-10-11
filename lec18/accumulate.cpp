#include <iostream>
#include <vector>
#include <numeric> // Required for std::accumulate

using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    // accumulate takes three arguments:
    // 1. Iterator to the start of the range.
    // 2. Iterator to the end of the range.
    // 3. The initial value for the sum (0 in this case).
    int sum = accumulate(v.begin(), v.end(), 0);

    cout << "The vector contains: 10 20 30 40 50" << endl;
    cout << "The sum of all elements is: " << sum << endl;

    return 0;
}