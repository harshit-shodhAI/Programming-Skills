#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks (0–100): ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A+" << endl;
    else if (marks >= 80)
        cout << "Grade: A" << endl;
    else if (marks >= 70)
        cout << "Grade: B" << endl;
    else if (marks >= 60)
        cout << "Grade: C" << endl;
    else if (marks >= 50)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    return 0;
}
