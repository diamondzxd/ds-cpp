#include <bits/stdc++.h>
using namespace std;

vector<int> m;

void helper(int key, vector<int> v, int i)
{
    if (v.size() == i)
    {
        return;
    }

    if (v[i] == key)
    {
        m.push_back(i);
    }
    helper(key, v, i + 1);
    return;
}

vector<int> findAllOccurences(int k, vector<int> v)
{

    m.clear();
    helper(k, v, 0);
    return m;
}

int main()
{
    return 0;
}