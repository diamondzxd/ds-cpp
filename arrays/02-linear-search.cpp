#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 15, 51, 52, 15, 236, 2, 56, 1, 245};
    int element = 56;

    int len = sizeof(arr) / sizeof(int);
    // cout << "Hello World!" << endl;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == element)
        {
            cout << arr[i] << " Exists at " << i << endl;
            break;
        }
    }

    return 0;
}