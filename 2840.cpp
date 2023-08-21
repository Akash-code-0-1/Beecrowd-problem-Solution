#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const double PI = 3.1415;
    long long int l;
    double r;
    cin >> r;
    cin >> l;
    double v = (4.0 / 3.0) * (PI * pow(r, 3));
    int res = (l / v);
    cout << res << endl;
}