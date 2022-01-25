#include <bits/stdc++.h>
using namespace std;

string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void spellNumber(int number)
{
    if (number == 0)
    {
        return;
    }
    int lastDigit = number % 10;
    number = number / 10;
    spellNumber(number);
    cout << spell[lastDigit] << " ";
}

int main()
{
    int num;
    cin >> num;
    spellNumber(num);
    return 0;
}