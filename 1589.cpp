#include <iostream>
using namespace std;
int main()
{
    long int T;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int r1 = 0;
        int r2 = 0;
        int ans = 0;

        cin >> r1;
        cin >> r2;

        ans = r1 + r2;

        cout << ans << endl;
    }
}