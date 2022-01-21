#include <iostream>
using namespace std;

int lastOccurrence(int arr[], int n, int key)
{
    // base case
    if (n == 0)
    {
        return -1;
    }

    // rec case
    int subIndex = lastOccurrence(arr + 1, n - 1, key);
    if (subIndex == -1)
    {
        if (arr[0] == key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else // subIndex is not -1
    {
        return subIndex + 1;
    }
}

int main()
{
    int arr[] = {5, 4, 23, 6, 4, 2, 6, 7, 3, 6};
    int n = sizeof(arr) / sizeof(int);
    int key = 6;

    cout << lastOccurrence(arr, n, key);
    return 0;
}