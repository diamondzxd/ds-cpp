#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int *arr = new int[n];
    arr[2] = 100; // this means *(arr+2). Dereferencing that address

    // Its the job of programmer to delete this memory object
    delete[] arr;
}