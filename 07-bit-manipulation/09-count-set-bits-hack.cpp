#include <iostream>
using namespace std;

// count bits code in

int countBitsHack(int num)
{
    int count = 0;
    while (num > 0)
    {
        int last_bit = (num & 1);
        count = count + last_bit;
        num = num >> 1;
    }
    return count;
}

int main()
{
    int num = 15;
    cout << countBitsHack(num) << endl;
    return 0;
}