// Write function to

// - get ith bit
// - set ith bit
// - clear ith bit

#include <iostream>
using namespace std;

int getIthBit(int n, int i)
{
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

void setIthBit(int &n, int i)
{
    int mask = (1 << i);
    n = (n | mask);
}

void clearIthBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
}

void updateIthBit(int &n, int i, int v)
{
    // Clear whatever is present in that bit, then set the correct bit.
    clearIthBit(n, i);
    int mask = (v << i);
    n = n | mask; // sets the correct bit
}

void clearLastIBits(int &n, int i)
{
    int mask = (-1 << i);
    n = n & mask;
}

int main()
{
    int num = 15;
    int i = 2;
    // cin >> i;

    // cout << getIthBit(num, i) << endl;

    // setIthBit(num, i);

    // clearIthBit(num, i);
    // updateIthBit(num, i, 1);
    clearLastIBits(num, i);

    cout << num;

    return 0;
}