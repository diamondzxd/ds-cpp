#include <iostream>
using namespace std;

void print(int arr[][10], int n, int m)
{
    // 4 variable indexes
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;

    // Outer loop (Traverse array boundary)

    while (startCol <= endCol and startRow <= endRow)
    {
        // Start Row
        for (int col = startCol; col <= endCol; col++)
        {
            cout << arr[startRow][col] << " ";
        }

        // End Colmn
        for (int row = startRow + 1; row <= endRow; row++)
        {
            cout << arr[row][endCol] << " ";
        }

        // End Row
        for (int col = endCol - 1; col >= startCol; col--)
        {
            if (startRow == endRow)
            {
                break;
            }
            cout << arr[endRow][col] << " ";
        }

        // Start Column
        for (int row = endRow - 1; row >= startRow + 1; row--)
        {
            if (startCol == endCol)
            {
                break;
            }
            cout << arr[row][startCol] << " ";
        }

        // update the variables to point to the inner spirals.

        startRow++;
        endCol--;
        endRow--;
        startCol++;
    }
}

int main()
{
    // print in spiral form

    int arr[][10] = {
        {1, 2, 3, 4},
        {12, 13, 14, 15},
        {44, 41, 14, 51},
        {87, 45, 19, 32}};
    int n = 4, m = 4;
    print(arr, n, m);

    return 0;
}