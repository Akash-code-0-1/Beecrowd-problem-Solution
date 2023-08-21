#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A, B, C;
    int vlm, edg;

    while (cin >> A >> B >> C)
    {

        if (A == 0 && B == 0 && C == 0)
        {
            break;
        }
        vlm = A * B * C;
        edg = cbrt(vlm);

        cout << edg << endl;
    }
}