#include <iostream>
#include <vector>
using namespace std;

void counting_sort(int arr[], int n)
{
    int largest = -100;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]); // finding largest element
    }

    // create a count array
    vector<int> freq(largest + 1, 0);

    // Update the frequency array
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        cout << "update works" << endl;
    }

    // Put back the elements from freq array into original array.

    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        cout << "for" << endl;
        while (freq[i] > 0)
        {
            cout << "while" << endl;
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
    cout << "sorted succesfully" << endl;
}

int main()
{
    int arr[] = {41, 4, 2, 1, 5, 12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "main works" << endl;
    counting_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}