#include <iostream>
using namespace std;

bool powerOf2(int num)
{
    int mask = num - 1;
    if ((num & mask) == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int num = 255;
    cout << powerOf2(num) << endl;
    return 0;
}