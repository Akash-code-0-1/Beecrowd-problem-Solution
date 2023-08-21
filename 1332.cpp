#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        string word;

        cin >> word;

        char l1 = word[0];
        char l2 = word[1];
        char l3 = word[2];

        if (l1 == 'o' && l2 == 'n' || l1 == 'o' && l3 == 'e' || l2 == 'n' && l3 == 'e')
        {
            cout << "1" << endl;
        }
        else if (word.length() == 5)
        {
            cout << "3" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
}