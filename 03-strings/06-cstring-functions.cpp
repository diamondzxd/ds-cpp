#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[500] = "apple";
    char b[500];

    cout << strlen(a) << endl;

    strcpy(b, a);
    cout << b << endl;

    cout << strcmp(a, b) << endl;

    char web[] = "www.";
    char domain[] = "google.com";

    char c[500];
    strcpy(c, strcat(web, domain));
    cout << c << endl;

    cout << strcmp(c, b) << endl;

    return 0;
}