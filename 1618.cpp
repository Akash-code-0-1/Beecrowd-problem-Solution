#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;

        if (rx >= ax && rx <= bx && rx >= dx && rx <= cx && ry >= ay && ry <= dy && ry >= by && ry <= cy)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}
