#include <iostream>
using namespace std;

pair<int, int> stairCaseSearch(int mat[][4], int n, int m, int key)
{
    // if element is not found return {-1, -1} instead
    if (key < mat[0][0] and key > mat[n - 1][m - 1])
    {
        return {-1, -1};
    }

    // aHR0cHM6Ly95b3V0dS5iZS9EcVI1NzV6NnFuSQ==

    // staircase search
    int i = 0;
    int j = m - 1;

    while (i < n - 1 and j >= 0)
    {
        if (mat[i][j] == key)
        {
            return {i, j};
        }
        else if (mat[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {-1, -1};
}

int main()
{
    // 2D Row & Column Wise Sorted Array
    int arr[][4] =
        {
            {10, 20, 30, 40},
            {15, 25, 35, 45},
            {27, 29, 37, 48},
            {32, 33, 39, 50}};

    int m = 4, n = 4;
    pair<int, int> coordinates = stairCaseSearch(arr, n, m, 27);
    cout << coordinates.first << " " << coordinates.second << endl;

    return 0;
}