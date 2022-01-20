// Write funcction to clear Bits in range i to j

#include <iostream>
using namespace std;

void clearBitsInRange(int &num, int i, int j)
{
    int a = (-1) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    num = num & mask;
}

int main()
{
    int num = 31;
    int i = 2;
    int j = 4;

    cout << num << endl;

    clearBitsInRange(num, i, j);

    cout << num;

    return 0;
}