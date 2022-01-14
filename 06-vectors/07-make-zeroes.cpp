#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr)
{
    vector<pair<int, int>> zeroCoords;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i][j] == 0)
            {
                zeroCoords.push_back(make_pair(i, j));
            }
        }
    }

    for (int i = 0; i < zeroCoords.size(); i++)
    {
        int x = zeroCoords[i].first;
        int y = zeroCoords[i].second;
        for (int p = 0; p < arr.size(); p++)
        {
            arr[p][y] = 0;
            for (int q = 0; q < arr[p].size(); q++)
            {
                arr[x][q] = 0;
            }
        }
    }

    return arr;
}

int main()
{
    vector<vector<int>> arr =
        {
            {1, 2, 3, 4},
            {8, 9, 0, 43},
            {69, 54, 21, 64}};

    makeZeroes(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}