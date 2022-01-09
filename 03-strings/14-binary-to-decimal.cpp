#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string s)
{
    int n = s.length();
    int index = 0;
    int decimal = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        decimal += pow(2, index) * (s[i] - '0'); // converting from ascii to actual int
        index++;
    }

    return decimal;
}

int main(int argc, char const *argv[])
{
    string binary = "1010";
    cout << binaryToDecimal(binary) << endl;
    return 0;
}