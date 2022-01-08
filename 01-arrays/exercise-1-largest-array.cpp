#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr)
{
    int largest;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0)
        {
            largest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    vector<int> arr = {-11, -5, -5, -1, -5, -1, -15, -151};
    cout << largestElement(arr) << endl;
    return 0;
}