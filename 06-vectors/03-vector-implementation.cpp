#include <iostream>
using namespace std;

class Vector
{
    // Data Members
    int *arr;
    int cs;
    int ms;

public:
    // Constructor, Destructor, Methods
    Vector(int max_size = 1)
    {
        cs = 0;
        ms = max_size;
        arr = new int[ms];
    }

    void push_back(int d)
    {
        if (cs == ms)
        {
            // create a new array and delete the old one and double the capacity of the array
            int *oldArr = arr;
            ms = 2 * ms;
            arr = new int[ms];

            // copying the elements
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            // delete
            delete[] oldArr;
        }
        arr[cs] = d;
        cs++;
    }

    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }

    bool isEmpty()
    {
        return cs == 0;
    }

    int getFront()
    {
        return arr[0];
    }

    int getBack()
    {
        return arr[cs - 1];
    }

    int at(int i)
    {
        return arr[i];
    }

    int size()
    {
        return cs;
    }

    int capacity()
    {
        return ms;
    }

    int operator[](int i)
    {
        return arr[i];
    }
};

int main()
{
    Vector v(5);

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();
    cout << v.getFront() << endl;
    cout << v.getBack() << endl;
    cout << v.at(3) << endl;

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}