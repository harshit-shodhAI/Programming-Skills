#include <iostream>
using namespace std;

int main()
{
    // A 2x3 matrix (2 rows, 3 columns)
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    cout << "Printing the 2x3 matrix:" << endl;

    // Nested loops to iterate through rows and columns
    for (int i = 0; i < 2; ++i)
    { // Loop through rows
        for (int j = 0; j < 3; ++j)
        { // Loop through columns
            cout << matrix[i][j] << " ";
        }
        cout << endl; // Newline after each row
    }

    return 0;
}