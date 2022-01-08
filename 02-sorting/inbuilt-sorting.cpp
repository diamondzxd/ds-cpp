#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a < b;
}

int main()
{
    int arr[] = {10, 5, 2, 5, 2, 5, 1, 67, 12, 6, 36, -124};
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr + n, compare);
    // reverse(arr, arr + n);

    // print the output
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}