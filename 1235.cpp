#include <iostream>
#include <string>
using namespace std;
int main()
{
    int c;
    string line;
    cin >> c;
    cin.ignore();
    for (int i = 0; i < c; i++)
    {
        getline(cin, line);
        int mid = line.length() / 2;
        for (int j = mid - 1; j >= 0; j--)
        {
            cout << line[j];
        }
        for (int j = line.length() - 1; j >= mid; j--)
        {
            cout << line[j];
        }
        cout << endl;
    }
}