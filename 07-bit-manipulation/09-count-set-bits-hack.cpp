#include <iostream>
using namespace std;

// count bits code in

int countBitsHack(int num)
{
    int count = 0;
    while (num > 0)
    {
        // remove the last set bit from the current number
        num = num & (num - 1);
        count++;
    }
    return count;
}

int main()
{
    int num = 15;
    cout << countBitsHack(num) << endl;
    return 0;
}