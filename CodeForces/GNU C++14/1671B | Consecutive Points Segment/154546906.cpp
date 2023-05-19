#include <iostream>
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
        int a3 = 0;
        int a1 = 0;
        int a2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == (a[i + 1] - 3))
            {
                a3++;
            }
            else if (a[i] == (a[i + 1] - 1))
            {
                a1++;
            }
            else if (a[i] == (a[i + 1] - 2))
            {
                a2++;
            }
        }
        if ((a3 + a1 + a2) != n - 1)
        {
            cout << "NO" << endl;
        }
        else if (a3 > 1)
        {
            cout << "NO" << endl;
        }
        else if (a3 == 1 && a1 == n - 2)
        {
            cout << "YES" << endl;
        }
        else if (a3 == 1 && a2 > 1)
        {
            cout << "NO" << endl;
        }
        else if (a2 <= 2 && a1 == ((n - 1) - a2))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}