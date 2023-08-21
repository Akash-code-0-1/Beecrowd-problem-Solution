#include <iostream>
using namespace std;
int main()
{
    int n;
    while ((cin >> n) && n != 0)
    {
        int german_goal = 0, brazil_goal = 0;
        if (n % 90 == 0)
        {
            int test_result = n / 90;
            german_goal = test_result * 7;
            brazil_goal = test_result * 1;

            printf("Brasil %d x Alemanha %d\n", brazil_goal, german_goal);
        }
        else
        {

            int test_result = n / 10;
            int test_german_goal = test_result % 9;
            int german_goal = test_german_goal * 7;
            german_goal += test_result - 9;

            int test_brazil_goal = n / 90;
            brazil_goal = test_brazil_goal * 1;

            printf("Brasil %d x Alemanha %d\n", brazil_goal, german_goal);
        }
    }
}