// Write an expression to check if a number is odd or even!

// Odd numbers will have last bit as 1
// Even numbers will have last bit as 0

// example

// 1 00001
// 2 00010
// 3 00011
// 4 00100
// 5 00101

// Solution : do & with 1

// 000001010101
// 000000000001 (&)
// 000000000001 = if the result comes 1, means the number is odd otherwise even

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x & 1) // will execute if true (1)
    {
        cout << "Odd" << endl;
    }
    else
    {
        cout << "Even" << endl;
    }
    return 0;
}