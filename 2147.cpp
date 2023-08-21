#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        float l = word.length();
        float res = l / 100;
        printf("%.2f\n", res);
    }
}