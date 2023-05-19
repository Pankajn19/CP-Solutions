#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int finalans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int cnt = 0;
                if (a[i][j] != a[j][n - 1 - i])
                {
                    cnt++;
                }
                if (a[i][j] != a[n - 1 - i][n - 1 - j])
                {
                    cnt++;
                }
                if (a[i][j] != a[n - 1 - j][i])
                {
                    cnt++;
                }
                if (cnt % 2)
                {
                    finalans++;
                }
                else
                    finalans += cnt;
 
                a[i][j] = 1;
                a[j][n - 1 - i] = 1;
                a[n - 1 - i][n - 1 - j] = 1;
                a[n - 1 - j][i] = 1;
            }
        }
        cout << finalans << endl;
    }
    return 0;
}