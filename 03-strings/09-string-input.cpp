#include <iostream>
#include <string>
using namespace std;

// Problem : Enter a string from Input Buffer.

int main()
{
    string sentence;

    getline(cin, sentence);
    cout << sentence << endl;
    return 0;
}