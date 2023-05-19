#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string b = "";
        for (int i = 0; i < m; i++)
        {
            b += 'B';
        }
        int minstep;
        int minval = 999999999;
        for (int i = 0; i < n; i++)
        {
 
            if (b[a[i] - 1] != b[m - a[i]])
            {
                if (b[a[i] - 1] == 'B')
                {
                    b[a[i] - 1] = 'A';
                }
                else
                    b[m - a[i]] = 'A';
            }
 
            else
            {
                b[min(a[i] - 1, m - a[i])] = 'A';
            }
        }
 
        cout << b << endl;
    }
    return 0;
}