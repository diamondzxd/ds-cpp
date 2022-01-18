#include <iostream>
using namespace std;

void dec(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // towards the base case
    cout << n << ", ";
    dec(n - 1);
}

void inc(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // towards the base case
    inc(n - 1);
    cout << n << ", ";
}

int main()
{
    int n = 10;
    dec(10);
    cout << endl;
    inc(10);
    return 0;
}