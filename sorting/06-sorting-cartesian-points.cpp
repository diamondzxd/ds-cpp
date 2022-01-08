#include <bits/stdc++.h>
using namespace std;

// bool CompareCartesian(const pair<int, int> &a, const pair<int, int> &b)
// {
//     return (a.first > b.first);
// }

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    sort(v.begin(), v.end());
    return v;
}

int main()
{
    vector<pair<int, int>> coordinates{{6, 8}, {1, 9}, {1, 4}, {4, 7}, {1, 1}, {4, 5}};

    coordinates = sortCartesian(coordinates);
    int n = coordinates.size();
    cout << "The vector after sort operation is:\n";
    for (int i = 0; i < n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << coordinates[i].first << " " << coordinates[i].second << endl;
    }
    // int N = coordinates.size();

    return 0;
}