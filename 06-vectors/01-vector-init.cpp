#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    // Fill Constructor initialisation
    vector<int> fill(10, 7);

    arr.pop_back();
    arr.push_back(54);

    cout << arr.size() << endl; // actual number of elements present in the vector

    cout << arr.capacity() << endl; // memory size of the vector

    // printing all elements

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < fill.size(); i++)
    {
        cout << fill[i] << " ";
    }

    return 0;
}