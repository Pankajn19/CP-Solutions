#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            cout << 0 << endl;
        }
 
        else if (ceil((double)sqrt(((x * x) + (y * y)))) == floor((double)sqrt(((x * x) + (y * y)))))
        {
            cout << 1 << endl;
        }
        else
            cout << 2 << endl;
    }
 
    return 0;
}