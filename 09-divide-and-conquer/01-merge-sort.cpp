#include <bits/stdc++.h>
using namespace std;

// helper function
void merge(vector<int> &array, int s, int e) // array, start and end
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;

    vector<int> temp;

    while (i <= m and j <= e)
    {
        if (array[i] < array[j])
        {
            temp.push_back(array[i]);
            i++;
        }
        else
        {
            temp.push_back(array[j]);
            j++;
        }
    }

    // copy remaining elements from first array

    while (i <= m)
    {
        temp.push_back(array[i]);
        i++;
    }

    // or copy remaining elements from second array
    while (j <= e)
    {
        temp.push_back(array[j]);
        j++;
    }

    // copy back the elements from temp to our original array
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        array[idx] = temp[k];
        k++;
    }
    return;
}

// sorting function
void mergeSort(vector<int> &array, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // rec case

    int mid = (s + e) / 2;
    mergeSort(array, s, mid);     // left part of array
    mergeSort(array, mid + 1, e); // right part of array
    return merge(array, s, e);
}

int main()
{
    vector<int> array = {10, 5, 2, 6, 5, 4, 5, 7, 8, 1};

    int s = 0;
    int e = array.size() - 1;
    mergeSort(array, s, e);

    for (int x : array)
    {
        cout << x << ", ";
    }
    return 0;
}