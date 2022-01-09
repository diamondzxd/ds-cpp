#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// input : abcd, bcad

bool arePermutation(string A, string B)
{
    // string a = A.c_str();
    // string b = B.c_str();
    return is_permutation(A.begin(), A.end(), B.begin());
}

int main()
{
    string a = "asdf";
    string b = "fdas";
    cout << arePermutation(a, b);
    return 0;
}