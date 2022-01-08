#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Size of the vector (no. of elements)
    //vector<int> arr = {1, 25, 69, 125, 125};

    //Fill Constructor
    vector<int> arr(10, 7);

    // Pop back
    arr.pop_back();

    // Push_Back inserts at the end of array at O(1) time.
    arr.push_back(16);

    // Print all elements of the vector

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    /* cout << arr.size() << endl;

    // Capacity of the vector (actual memory allocated to the vector)
    cout << arr.capacity() << endl;*/

    return 0;
}