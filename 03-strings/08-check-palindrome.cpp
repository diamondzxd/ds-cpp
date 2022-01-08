#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    char chararr[1000];
    string P = str;

    reverse(P.begin(), P.end());

    if (P == str)
    {
        return true;
    }
    return false;
}

int main()
{
    string s = "HelloWorld";
    cout << isPalindrome(s);
    string pal = "aba";
    cout << isPalindrome(pal);
}