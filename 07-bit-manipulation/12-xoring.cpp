#include <iostream>
#include <vector>
using namespace std;

int xoring(vector<int> v)
{
    int res = 0;
    for (auto x : v)
    {
        res = res ^ x;
    }
    return res;
}

int main()
{
    vector<int> v = {7, 7, 67, 3, 5, 4, 5, 3, 4};
    cout << xoring(v) << endl;
    return 0;
}
