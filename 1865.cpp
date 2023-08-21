#include <iostream>
#include <string>
using namespace std;
int main()
{
    long int c;
    cin >> c;

    string n;
    int p;

    for (int i = 0; i < c; i++)
    {
        cin >> n;
        cin >> p;

        if (n == "Thor")
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
}