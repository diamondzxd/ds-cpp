#include <iostream>
using namespace std;

// Time Complexity - O(2^N)
// Space complexity - O(N)

int fib(int n)
{
    // base case
    if (n == 0 or n == 1)
    {
        return n;
    }

    // rec case
    int f1 = fib(n - 1);
    int f2 = fib(n - 2);
    return f1 + f2;
    // return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}