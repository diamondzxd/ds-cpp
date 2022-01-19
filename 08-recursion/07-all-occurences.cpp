#include <bits/stdc++.h>
using namespace std;

vector<int> findAllOccurences(int k, vector<int> v)
{
    int n = v.size();
    // base case
    if (n == 0)
    {
        return -1;
    }

    // rec case
    if (v[0] == k)
    {
        return 0;
    }

    int subIndex = firstOccurrence(v + 1, n - 1, k);
    if (subIndex != -1)
    {
        return subIndex + 1;
    }
    return -1;
}

#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key)
{
    // base case
    if (n == 0)
    {
        return -1;
    }

    // rec case
    if (arr[0] == key)
    {
        return 0;
    }

    int subIndex = firstOccurrence(arr + 1, n - 1, key);
    if (subIndex != -1)
    {
        return subIndex + 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 6, 6, 7, 3, 6, 3, 6, 3, 6, 76};
    int n = sizeof(arr) / sizeof(int);
    int key = 7;

    cout << firstOccurrence(arr, n, key);
}