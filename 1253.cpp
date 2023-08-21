#include <iostream>
#include <string>

using namespace std;
int main()
{
    int c, n;
    cin >> c;
    cin.ignore();
    string line;

    for (int i = 0; i < c; i++)
    {
        getline(cin, line);
        cin >> n;
        cin.ignore();
        for (int j = 0; j < line.length(); j++)
        {
            line[j] = 65 + (line[j] - 65 - n + 26) % 26;
        }
        cout << line << endl;
    }
}