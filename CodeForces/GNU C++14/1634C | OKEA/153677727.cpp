#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n][k];
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < k; i++)
            {
                a[j][i] = ((j + 1) + (i * n));
            }
        }
 
        int sum = 0;
        int j = 0;
        int flag = 1;
        for (int l = 0; l < n; l++)
        {
            for (int i = 0; i < k; i++)
            {
                for (j = 0; j <= i; j++)
                {
                    sum = sum + a[l][j];
                }
                if ((sum % (i + 1)) == 0)
                {
                    sum = 0;
                }
                else
                    flag = 0;
            }
        }
 
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < k; j++)
                {
                    cout << a[i][j];
                    cout << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}