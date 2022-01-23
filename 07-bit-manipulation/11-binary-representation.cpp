#include <iostream>
using namespace std;

int convertToBinary(int n)
{
    int power = 1;
    int ans = 0;
    while (n > 0)
    {
        ans = ans + (n & 1) * power;
        power = power * 10;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << convertToBinary(n) << endl;
    return 0;
}
