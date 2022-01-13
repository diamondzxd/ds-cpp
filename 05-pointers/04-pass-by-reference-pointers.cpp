#include <iostream>
using namespace std;

void watchVideo(int *viewsPtr)
{
    ++*viewsPtr; // viewsPtr = viewsPtr + 1;
    // watch video should increment the count by 1
}

int main()
{
    int views = 100;
    watchVideo(&views);

    cout << views << endl;

    return 0;
}