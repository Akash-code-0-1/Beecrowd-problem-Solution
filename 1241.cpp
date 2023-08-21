#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string a, b;

        cin >> a;
        cin >> b;

        int al = a.length();
        int bl = b.length();

        if (al < bl)
        {
            cout << "nao encaixa" << endl;
        }
        else
        {
            string extractedSubstring = a.substr(al - bl, bl);

            if (extractedSubstring == b)
            {
                cout << "encaixa" << endl;
            }
            else
            {
                cout << "nao encaixa" << endl;
            }
        }
    }
}