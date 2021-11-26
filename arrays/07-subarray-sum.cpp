#include<iostream>
using namespace std;

// find out the largest subarrays' sum of the given arrays


// Brute Force O(N^3)
int largestSubarraySum1(int arr[], int n)
{
    int largest_sum = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {

            int subarraySum = 0;
            for(int k=i; k<=j; k++)
            {
                // cout << arr[k] << ",";
                subarraySum += arr[k];
            }
            // put a check if subarraySum > largest_sum

            largest_sum = max(subarraySum,largest_sum);
        }
    }

    return largest_sum;
}

// Prefix Sum Approach O(N^2)
int largestSumPrefix(int arr[], int n)
{
    int prefix[n] = {0};
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }

    int largest_sum = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {

            int subarraySum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];

            largest_sum = max(subarraySum,largest_sum);
        }
    }

    return largest_sum;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int n = sizeof(arr)/sizeof(int);

    cout << largestSubarraySum1(arr,n) << endl;

    cout << largestSumPrefix(arr,n);

    return 0;
}