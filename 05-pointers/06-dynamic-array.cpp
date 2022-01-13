#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Dynamic Array
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
        cout << arr[i] << " ";
    }

    // Delete
    delete[] arr;

    cout << arr << endl; // Data of the array is deleted but the address still persists.

    return 0;
}