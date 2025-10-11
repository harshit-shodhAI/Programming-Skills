#include <iostream>
#include <vector>
#include <algorithm> // Required for most algorithms

using namespace std;

void printVec(const vector<int> &v)
{
    for (int val : v)
        cout << val << " ";
    cout << endl;
}

int main()
{
    vector<int> numbers = {50, 20, 80, 10, 40};
    cout << "Original vector: ";
    printVec(numbers);

    // std::sort takes two iterators: the beginning of the range to sort,
    // and the end of the range to sort.
    sort(numbers.begin(), numbers.end());

    cout << "Sorted vector:   ";
    printVec(numbers);

    return 0;
}