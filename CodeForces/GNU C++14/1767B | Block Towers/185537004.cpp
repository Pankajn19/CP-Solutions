#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int t; // number of test cases
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
        sort(a + 1, a + n);
        // reverse(a + 1, a + n);
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[0])
            {
                int diff = a[i] - a[0];
                if (diff % 2)
                    a[0] += ((diff + 1) / 2);
                else
                    a[0] += (diff / 2);
            }
        }
        cout << a[0] << endl;
    }
    return 0;
}