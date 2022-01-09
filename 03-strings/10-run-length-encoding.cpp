#include <bits/stdc++.h>
using namespace std;

// If compressed string bigger than original string, then return original.
// Input : jjjjjjkkkkkkklllllll
// Output : j6k7l7

// Input xyza
// Output xyza

string compressString(string str)
{
    int n = str.length();

    string output;

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        while (i < n - 1 and str[i + 1] == str[i])
        {
            count++;
            i++;
        }
        output = output + str[i];
        output = output + to_string(count);
    }

    if (output.length() < str.length())
    {
        return output; // return output string only if it is smaller than original string.
    }
    else
    {
        return str; // otherwise just return the original string.
    }
}

int main()
{
    string s1 = "jjjjjjkkkkkkklllllll";
    cout << compressString(s1) << endl;

    string s2 = "abcd";
    cout << compressString(s2) << endl;

    return 0;
}