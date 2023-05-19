#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char c;
        cin >> c;
        int i;
        int flag = 0;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == c && i % 2 == 0)
            {
                break;
            }
        }
        if (i == s.size())
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
 
    return 0;
}