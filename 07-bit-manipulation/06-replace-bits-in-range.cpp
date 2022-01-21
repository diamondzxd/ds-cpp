// Write funcction to clear Bits in range i to j

#include <iostream>
using namespace std;

/*
N = 10000000000
M = 10101
i = 2, j= 6

Output = 10001010100

*/

void clearBitsInRange(int &num, int i, int j)
{
    int a = (-1) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    num = num & mask;
}

void replaceBits(int &num, int i, int j, int m)
{
    clearBitsInRange(num, i, j);
    int mask = (m << i);
    num = num | mask;
}

int main()
{
    int num = 15;
    int i = 1;
    int j = 3;
    int m = 2;

    cout << num << endl;

    replaceBits(num, i, j, m);

    cout << num;

    return 0;
}