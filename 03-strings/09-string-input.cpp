#include <iostream>
#include <string>
using namespace std;

// Problem : Enter a string from Input Buffer.

int main()
{
    string sentence;
    // can also put for loop in the string and it will print every character.

    getline(cin, sentence);
    cout << sentence << endl;

    string hash;

    getline(cin, hash, '#'); // hash is the delimiter
    cout << hash << endl;
    return 0;
}