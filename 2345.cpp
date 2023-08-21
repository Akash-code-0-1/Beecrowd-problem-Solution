#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int ar[4], diff1, diff2;

    for (int i = 0; i < 4; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + 4);

    diff1 = ar[3] + ar[0] - (ar[2] + ar[1]);
    diff2 = ar[3] + ar[1] - (ar[2] + ar[0]);

    int min_diff = min(abs(diff1), abs(diff2));

    cout << min_diff << endl;
}