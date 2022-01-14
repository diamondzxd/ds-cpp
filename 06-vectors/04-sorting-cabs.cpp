#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.first + a.second < b.first + b.second;
}

void sortCabs(vector<pair<int, int>> &v)
{
    sort(v.begin(), v.end(), compare);
}

int main()
{
    vector<pair<int, int>> v = {
        make_pair(2, 3),
        make_pair(1, 2),
        make_pair(3, 4),
        make_pair(2, 4),
        make_pair(1, 4)};

    sortCabs(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}