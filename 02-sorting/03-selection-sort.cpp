#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int pos = 0; pos <= n - 2; pos++)
    {
        int current = arr[pos];
        int min_pos = pos;

        // find the minimum element
        for (int j = pos; j < n; j++)
        {
            if (arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }

        // swap outside the loop
        swap(arr[min_pos], arr[pos]);
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    selection_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}