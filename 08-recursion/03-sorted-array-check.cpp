#include <iostream>
using namespace std;

bool checkSortedArray(int arr[], int n)
{
    // base case
    if (n == 1 or n == 0)
    {
        return true;
    }

    // rec case
    if ((arr[0] < arr[1]) and checkSortedArray(arr + 1, n - 1))
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1};
    int n = sizeof(arr) / sizeof(int);
    cout << checkSortedArray(arr, n);
    return 0;
}