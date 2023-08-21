#include <iostream>
#include <string>

using namespace std;

int main()
{
    int p, i, proc, clock;
    string linha;

    while (getline(cin, linha))
    {
        cin >> p;
        cin.ignore();

        proc = clock = 0;

        for (i = 0; linha[i] != '\0'; i++)
        {
            if (linha[i] == 'W')
            {
                clock++;
                if (proc > 0)
                {
                    proc = 0;
                    clock++;
                }
            }
            else
            {
                proc++;
                if (proc == p)
                {
                    clock++;
                    proc = 0;
                }
            }
        }

        if (proc > 0)
            clock++;

        cout << clock << endl;
    }

    return 0;
}
