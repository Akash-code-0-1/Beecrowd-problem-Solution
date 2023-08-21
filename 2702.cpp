#include <iostream>
using namespace std;
int main()
{
    int Ca, Ba, Pa, Cr, Br, Pr;
    int ans = 0;
    cin >> Ca >> Ba >> Pa >> Cr >> Br >> Pr;
    if (Cr > Ca)
    {
        ans += Cr - Ca;
    }
    if (Br > Ba)
    {
        ans += Br - Ba;
    }
    if (Pr > Pa)
    {
        ans += Pr - Pa;
    }

    cout << ans << endl;
}