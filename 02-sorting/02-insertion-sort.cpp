#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int current = arr[i]; // current element
        int prev = i - 1;     // previous index

        //loop to find the right index where the element current should be inserted
        while (prev >= 0 and arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }

        arr[prev + 1] = current;
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    insertion_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}