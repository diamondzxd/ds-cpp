#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &y = x; // creating an alias for the same object

    cout << x << " " << y << endl;
    y = 53; // changing value of y
    x++;    // increment of x

    cout << x << " " << y << endl; // but it changes for both
}