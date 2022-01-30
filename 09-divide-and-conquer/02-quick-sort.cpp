#include <bits/stdc++.h>
using namespace std;

// helper function

int partition(vector<int> &array, int s, int e)
{
    int pivot = array[e];
    int i = s - 1;

    for (int j = s; j < e; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[e]);
    return i + 1;
}

// sorting function
void quickSort(vector<int> &array, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // recursive case

    int p = partition(array, s, e);
    quickSort(array, s, p - 1);
    quickSort(array, p + 1, e);
}

int main()
{
    vector<int> array = {10, 5, 2, 6, 5, 4, 5, 7, 8, 1};
    int n = array.size();
    quickSort(array, 0, n - 1);

    for (int x : array)
    {
        cout << x << ", ";
    }
    return 0;
}