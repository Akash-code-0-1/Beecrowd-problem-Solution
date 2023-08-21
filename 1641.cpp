//not accepted
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const double PI = 3.1415;
    int w, l, r, i = 0;
    while (true)
    {
        cin >> r >> w >> l;
        if (r == 0)
        {
            break;
        }
        i++;
        double tableArea = PI * pow(r, 2);
        double pizzaArea = w * l;
        // int res = tableArea / pizzaArea;

        if (pizzaArea <= tableArea)
        {
            printf("Pizza %d fits on the table.\n", i);
        }
        else
        {
            printf("Pizza %d does not fit on the table.\n", i);
        }
    }
}