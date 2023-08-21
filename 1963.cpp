#include <iostream>
using namespace std;
int main()
{
    double a, b, ans;

    cin >> a >> b;

    ans = (((b - a) / a) * 100);

    printf("%.2lf%%\n", ans);
}