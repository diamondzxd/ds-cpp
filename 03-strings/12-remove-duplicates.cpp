#include <bits/stdc++.h>
using namespace std;

void sortString(string &str)
{
    sort(str.begin(), str.end());
    cout << str;
}

string removeDuplicate(string s)
{
    int n = s.length();
    string output;
    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        while (i < n - 1 and s[i + 1] == s[i])
        {
            count++;
            i++;
        }
        output = output + s[i];
        // output = output + to_string(count);
    }
    return output;
}

int main()
{
    string S = "geeksforgeeks";
    string newString = removeDuplicate(S);
    cout << newString;
    return 0;
}