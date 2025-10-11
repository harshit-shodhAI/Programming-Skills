#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    // Data members are private to protect them from invalid access
    string name;
    double gpa;

public:
    // Public "setter" methods to modify private data with validation
    void setName(string n)
    {
        name = n;
    }

    void setGpa(double newGpa)
    {
        // Validation: Only allow GPAs in a valid range
        if (newGpa >= 0.0 && newGpa <= 4.0)
        {
            gpa = newGpa;
        }
        else
        {
            cout << "Error: Invalid GPA. Value not set." << endl;
        }
    }

    // Public "getter" methods to read private data
    string getName()
    {
        return name;
    }

    double getGpa()
    {
        return gpa;
    }
};

int main()
{
    Student s1;

    // We cannot access private members directly from main:
    // s1.name = "Priya"; // This would cause a COMPILE ERROR

    // We must use the public interface (methods)
    s1.setName("Priya");
    s1.setGpa(3.8);

    cout << "Student: " << s1.getName() << ", GPA: " << s1.getGpa() << endl;

    cout << "\nAttempting to set an invalid GPA..." << endl;
    s1.setGpa(5.0);                                                          // The validation inside the setter will prevent this
    cout << "Student: " << s1.getName() << ", GPA: " << s1.getGpa() << endl; // GPA remains 3.8

    return 0;
}