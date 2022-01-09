#include <bits/stdc++.h>
using namespace std;

string vowel(string S)
{
    string vowels;
    int n = S.length();
    for (int i = 0; i < n; i++)
    {
        if (S[i] == 'a' or S[i] == 'e' or S[i] == 'i' or S[i] == 'o' or S[i] == 'u')
        {
            vowels = vowels + S[i];
            cout << "vowel found" << endl;
        }
    }
    return vowels;
}

int main()
{
    string str = "aeiouuuuuuuuqweroiuasdfasjkldfqowiehfasdklajklsdfmn";
    cout << vowel(str) << endl;
    return 0;
}
