#include <iostream>
#include <limits>
using namespace std;

int main()
{
    // -------------------------------
    // Integer type modifiers
    // -------------------------------
    signed int si = -10;                // signed -> can store negative + positive
    unsigned int ui = 20;               // unsigned -> only positive, larger max
    short int shi = 30000;              // short -> smaller range, saves memory
    unsigned short int ushi = 60000;    // unsigned short -> larger positive max
    long int li = 100000L;              // long -> bigger range than int
    unsigned long int uli = 200000UL;   // unsigned long -> no negatives
    long long int lli = 900000000000LL; // very large range
    unsigned long long int ulli = 1800000000000ULL;

    // -------------------------------
    // Character type modifiers
    // -------------------------------
    signed char sc = -100;  // signed char: -128 to 127
    unsigned char uc = 200; // unsigned char: 0 to 255

    // -------------------------------
    // Floating point types
    // -------------------------------
    float f = 3.14f;                        // 4 bytes (approx 6-7 digits precision)
    double d = 3.1415926535;                // 8 bytes (approx 15 digits precision)
    long double ld = 3.141592653589793238L; // 10/12/16 bytes depending on compiler

    // -------------------------------
    // Display values
    // -------------------------------
    cout << "Signed int: " << si << endl;
    cout << "Unsigned int: " << ui << endl;
    cout << "Short int: " << shi << endl;
    cout << "Unsigned short int: " << ushi << endl;
    cout << "Long int: " << li << endl;
    cout << "Unsigned long int: " << uli << endl;
    cout << "Long long int: " << lli << endl;
    cout << "Unsigned long long int: " << ulli << endl;

    cout << "Signed char: " << (int)sc << endl; // cast to int to print as number
    cout << "Unsigned char: " << (int)uc << endl;

    cout << "Float: " << f << endl;
    cout << "Double: " << d << endl;
    cout << "Long double: " << ld << endl;

    // -------------------------------
    // Overflow and underflow examples
    // -------------------------------
    short int shi_max = numeric_limits<short>::max(); // 32767
    short int shi_min = numeric_limits<short>::min(); // -32768

    short int shi_over = shi_max + 1;  // Overflow: wraps around to negative
    short int shi_under = shi_min - 1; // Underflow: wraps around to positive

    unsigned short int ushi_max = numeric_limits<unsigned short>::max(); // 65535
    unsigned short int ushi_over = ushi_max + 1;                         // Overflow: wraps around to 0

    cout << "\n--- Overflow/Underflow Demo ---\n";
    cout << "Signed short max: " << shi_max << endl;
    cout << "Signed short overflow (max+1): " << shi_over << endl;
    cout << "Signed short min: " << shi_min << endl;
    cout << "Signed short underflow (min-1): " << shi_under << endl;

    cout << "Unsigned short max: " << ushi_max << endl;
    cout << "Unsigned short overflow (max+1): " << ushi_over << endl;

    // -------------------------------
    // sizeof operator demo
    // -------------------------------
    cout << "\n--- Sizes of types (in bytes) ---\n";
    cout << "sizeof(short int): " << sizeof(short int) << endl;
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(long int): " << sizeof(long int) << endl;
    cout << "sizeof(long long int): " << sizeof(long long int) << endl;
    cout << "sizeof(float): " << sizeof(float) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(long double): " << sizeof(long double) << endl;

    return 0;
}
