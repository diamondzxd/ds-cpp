#include <iostream>
using namespace std;

int main()
{
    char sentence[1000];
    char temp = cin.get();
    int len = 0;

    while (temp != '\n')
    {
        sentence[len++] = temp;
        temp = cin.get();
    }
    sentence[len] = '\0';

    cout << sentence << endl;
    cout << len << endl;

    return 0;
}
