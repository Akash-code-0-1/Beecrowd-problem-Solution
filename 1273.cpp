#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    bool fc = true;
    while ((cin >> n) && n != 0)
    {
        if (!fc)
        {
            cout << endl;
        }
        fc = false;
        string word[n];
        for (int i = 0; i < n; i++)
        {
            cin >> word[i];
        }
        string lw = word[0];
        for (int i = 1; i < n; i++)
        {
            if (word[1].length() > lw.length())
            {
                lw = word[i];
            }
        }
        int flw = lw.length();
        for (int i = 0; i < n; i++)
        {
            int nspc = 0;
            nspc = flw - word[i].length();
            string nw = string(nspc, ' ') + word[i];
            cout << nw << endl;
        }
    }
}