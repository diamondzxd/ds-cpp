#include <iostream>
using namespace std;

// Pass by Value example
// void applyTax(int income)
// {
//     float tax = 0.10;
//     income = income - (income * tax);
// }

// Pass by Reference example
void applyTax(int &money)
{
    float tax = 0.10;
    money = money - (money * tax);
}

int main()
{
    int income;
    cin >> income;
    applyTax(income);
    // no need to store the values in pass by reference functions as they'll directly act upon the data

    cout << income << endl;

    return 0;
}