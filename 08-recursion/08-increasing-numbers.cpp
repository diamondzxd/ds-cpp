#include <bits/stdc++.h>
using namespace std;

vector<int> result;

void helper(int num, int index)
{
    if ((num == index))
    {
        return;
    }
    ++index;
    cout << index << " " << endl;
    result.push_back(index);

    helper(num, index);
}

vector<int> increasingNumbers(int N)
{
    result.clear();
    helper(N, 0);
    return result;
}

int main()
{

    vector<int> v = increasingNumbers(10);
    return 0;
}