// Binary Left Shift, shift the bits to left by magnitute specified

// 5 << 2
// gives 2^2 * 5

// a << b
// a * 2^b

// Binary Right shift, shift the bits to the right by magnitute specified
// 10 >> 1
// 10 / 2^1

// a >> b
// a / 2^b

#include <iostream>
using namespace std;

int main()
{
    cout << (5 << 2) << endl;

    cout << (10 >> 4) << endl; // gives 0 because demonitator is more than numerator
    cout << (10 >> 1) << endl;

    return 0;
}