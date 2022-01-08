#include <iostream>
using namespace std;

// Find Displacement : Given a long route containing N,S,E,W directions, find the shortest
// path to reach the location

// Input : SNNNEWE
// Output : NNE

// What to do : Eliminate the NSEW pairs together.

int main()
{
    char route[1000];
    cin.getline(route, 1000);
    int x = 0;
    int y = 0;

    for (int i = 0; route[i] != '\0'; i++)
    {
        switch (route[i])
        {
        case 'N':
            y++;
            break;

        case 'S':
            y--;
            break;

        case 'W':
            x--;
            break;

        case 'E':
            x++;
            break;

        default:
            break;
        }
    }

    // For North
    if (y > 0)
    {
        for (int i = 0; i < y; i++)
        {
            cout << "N";
        }
    }

    // For South
    if (y < 0)
    {
        for (int i = 0; i > y; i--)
        {
            cout << "S";
        }
    }

    // For East
    if (x > 0)
    {
        for (int i = 0; i < x; i++)
        {
            cout << "E";
        }
    }

    // For West
    if (x < 0)
    {
        for (int i = 0; i > x; i--)
        {
            cout << "W";
        }
    }

    return 0;
}
