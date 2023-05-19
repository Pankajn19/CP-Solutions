#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if (l1 == l2)
        {
            cout << l1 << endl;
        }
        else if (l2 > l1)
        {
            if (l2 > r1)
            {
                cout << l1 + l2 << endl;
            }
            else
                cout << l2 << endl;
        }
        else if (l2 < l1)
        {
            if (r2 >= l1)
            {
                cout << l1 << endl;
            }
            else
                cout << l1 + l2 << endl;
        }
    }
    return 0;
}