#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    if (flag == true)
    {
        sort(a.begin(), a.end());
    }
    else
    {
        sort(a.begin(), a.end(), greater<int>());
    }
    return a;
}