#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int zero = 0;
        int nz = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                zero++;
            }
            else
                nz++;
        }
        int i = 0;
 
        if (nz <= zero)
        {
            cout << nz << endl;
        }
        else if (zero > 0)
        {
            cout << nz << endl;
        }
 
        else if (zero == 0)
        {
            while (i < n - 1 && a[i] != a[i + 1])
            {
                i++;
            }
            if (i == n - 1)
            {
                cout << nz + 1 << endl;
            }
            else
                cout << nz << endl;
        }
    }
    return 0;
}