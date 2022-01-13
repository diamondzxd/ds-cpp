#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 2D Vector
    vector<vector<int>> arr =
        {
            {1, 5, 1, 4},
            {5, 26, 161},
            {981, 519}};
    // Benefits of 2D Vector :
    // Each row can have independent number of elements

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}