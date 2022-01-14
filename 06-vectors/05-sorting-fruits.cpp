#include <bits/stdc++.h>
using namespace std;

bool comparePrice(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second;
}

bool compareName(pair<string, int> a, pair<string, int> b)
{
    return a.first > b.first;
}

vector<pair<string, int>> sortFruits(vector<pair<string, int>> v, string S)
{
    if (S == "price")
    {
        sort(v.begin(), v.end(), comparePrice);
    }
    else if (S == "name")
    {
        sort(v.begin(), v.end()), compareName;
    }
    return v;
}

int main()
{
    vector<pair<string, int>> v = {
        make_pair("Apple", 10),
        make_pair("Bananas", 20),
        make_pair("Mangoes", 30),
        make_pair("Oranges", 40),
        make_pair("Cherries", 60)};

    sortFruits(v, "price");

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}