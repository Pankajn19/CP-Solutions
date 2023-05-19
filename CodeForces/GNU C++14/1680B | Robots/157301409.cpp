#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int cr = 0;
        int ce = 0;
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (s[i][j] == 'R')
                {
                    cr++;
                }
                else
                    ce++;
            }
        }
 
        if (s[0][0] == 'R')
        {
            cout << "YES" << endl;
        }
        else if (cr > 0)
        {
            int x, y, a, b;
            x = 100000;
            b = 100000;
 
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (s[i][j] == 'R')
                    {
                        if (x > i)
                        {
                            x = i;
                            y = j;
                        }
                        if (b > j)
                        {
                            b = j;
                            a = i;
                        }
                    }
                }
            }
            if (x == a && y == b)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}