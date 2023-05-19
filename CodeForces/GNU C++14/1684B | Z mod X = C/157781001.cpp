#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long x, y, z;
 
        y = b + c;
        z = c;
        x = a + b + c;
 
        cout << x << " " << y << " " << z << endl;
    }
 
    return 0;
}