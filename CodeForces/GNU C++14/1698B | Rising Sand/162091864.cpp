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
        int a[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        if (k != 1)
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (a[i] > (a[i - 1] + a[i + 1]))
                {
                    cnt++;
                }
            }
            cout << cnt << endl;
        }
        else if (k == 1)
        {
            if (n % 2)
            {
                cout << (n - 1) / 2 << endl;
            }
 
            else
                cout << (n - 2) / 2 << endl;
        }
    }
    return 0;
}