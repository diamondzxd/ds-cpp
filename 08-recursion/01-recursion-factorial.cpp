#include <iostream>
using namespace std;

// Technique where the solution to a problem depends on solutions to
// smaller instances of the same problem.

// Base Case
// Recursive Case
// Call Stack in Recursion

// Note : All Recursive problems will take extra space due to the implicit call stack

int fact(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    // recursive case
    int ans = n * fact(n - 1);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}