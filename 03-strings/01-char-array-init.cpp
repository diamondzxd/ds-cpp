#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100] = {'a', 'b', 'c'};
    char b[100] = {'a', 'b', 'c', 'd', '\0'};
    char c[] = "abcdefgh";
    char d[100];
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    // number of visible characters
    cout << strlen(c) << endl;
    // +1 because of the null character
    cout << sizeof(c) << endl;

    cin >> d;
    cout << d << endl;

    return 0;
}
