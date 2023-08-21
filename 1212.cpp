#include <iostream>

long NumCarryAdd(long n1, long n2)
{
    long a, b, c, t;
    c = 0;
    t = 0;
    while (true)
    {
        a = n1 % 10;
        b = n2 % 10;
        n1 = n1 / 10;
        n2 = n2 / 10;
        if ((a + b + c) >= 10)
        {
            t++;
            c = 1;
        }
        else
            c = 0;
        if (n1 == 0 && n2 == 0)
            break;
    }
    return t;
}

int main()
{
    long x, y, carry;
    while (true)
    {
        std::cin >> x >> y;
        if (x == 0 && y == 0)
            break;
        carry = NumCarryAdd(x, y);
        if (carry == 0)
            std::cout << "No carry operation." << std::endl;
        else if (carry == 1)
            std::cout << "1 carry operation." << std::endl;
        else
            std::cout << carry << " carry operations." << std::endl;
    }
    return 0;
}
