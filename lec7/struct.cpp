#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    float gpa;
};

int main()
{
    Student s = {"Priya", 20, 8.9f};

    cout << "Student details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age:  " << s.age << endl;
    cout << "GPA:  " << s.gpa << endl;

    return 0;
}
