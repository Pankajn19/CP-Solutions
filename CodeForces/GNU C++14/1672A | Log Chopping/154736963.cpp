#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        int alpha = sum - n;
 
        if ((alpha % 2) == 1)
        {
            cout << "errorgorn" << endl;
        }
        else
            cout << "maomao90" << endl;
    }
 
    return 0;
}