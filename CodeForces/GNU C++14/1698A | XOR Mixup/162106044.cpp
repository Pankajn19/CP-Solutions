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
        int x = 0;
        int temp, flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (flag == 1)
            {
                break;
            }
            else
            {
                temp = a[j];
                a[j] = 0;
                for (int i = 0; i < n; i++)
                {
                    if (i == j)
                    {
                        continue;
                    }
                    else
                        x = x ^ a[i];
                }
                if (x == temp)
                {
                    flag = 1;
                    cout << x << endl;
                }
                a[j] = temp;
            }
        }
    }
    return 0;
}