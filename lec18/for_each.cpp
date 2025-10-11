#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Using for_each to print elements: ";
    // A lambda function: [capture_clause](parameters){ body }
    // Here, it takes one integer argument and prints it.
    for_each(numbers.begin(), numbers.end(), [](int n)
             { cout << n << " "; });
    cout << endl;

    // Use for_each to modify the elements of the vector.
    // We pass 'n' by reference (&) to allow modification.
    for_each(numbers.begin(), numbers.end(), [](int &n)
             {
                 n = n * n; // Square each number
             });

    cout << "Vector after squaring each element: ";
    for_each(numbers.begin(), numbers.end(), [](int n)
             { cout << n << " "; });
    cout << endl;

    return 0;
}