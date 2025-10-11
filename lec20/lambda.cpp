#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> numbers = {5, 1, 4, 2, 3};

    // --- Basic Lambda with std::for_each ---
    cout << "Printing with a lambda: ";
    for_each(numbers.begin(), numbers.end(), [](int n)
             { cout << n << " "; });
    cout << endl;

    // --- Lambda for custom sorting ---
    // The lambda defines the comparison logic for sort.
    sort(numbers.begin(), numbers.end(), [](int a, int b)
         {
             return a > b; // Sort in descending order
         });

    cout << "Sorted descending: ";
    for (int n : numbers)
    {
        cout << n << " ";
    }
    cout << endl;

    // --- Lambda with a capture ---
    // Lambdas can "capture" variables from their surrounding scope.
    int threshold = 3;
    // The [threshold] part is the capture clause. It makes 'threshold' available inside the lambda.
    int count = count_if(numbers.begin(), numbers.end(), [threshold](int n)
                         { return n > threshold; });

    cout << "There are " << count << " numbers greater than " << threshold << "." << endl;

    return 0;
}