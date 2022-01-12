#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int *xptr = &x; // pointer holds the address of the variable

    float y = 123.512;
    float *yptr = &y;

    cout << &x << endl;
    cout << xptr << endl;

    cout << &y << endl;
    cout << yptr << endl;

    cout << x << endl;

    cout << *&x << endl; // first finding the address then dereferencing the value, which is equal to x.

    cout << *xptr << endl; // deference operator shows the value of the actual pointed variable

    cout << y << endl;
    cout << *yptr << endl;

    ////////////////////////////////////////////////////////////////////////
    // NULL POINTERS

    // Pointers which point to nothing

    int *p = 0;
    int *q = NULL;

    cout << p << endl;
    cout << q << endl;
    cout << *q << endl; // This will give segmentation fault

    return 0;
}