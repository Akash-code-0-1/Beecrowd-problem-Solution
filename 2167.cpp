#include <iostream>
using namespace std;
int main()
{
    int c;
    cin >> c;
    int ar[200];
    int count = 0;
    for (int i = 1; i <= c; i++)
    {
        cin >> ar[i];
    }
    for (int i = 1; i <= c-1; i++)
    {

        if (ar[i] > ar[i + 1])
        {
            count = i + 1;
            break;
        }
    }
    cout << "" << count << endl;
}