#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int p[n];
    vector<long long> maxval(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int query[q][2];
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> query[i][j];
        }
    }
    /* for(int i=0;i<q;i++){
        for(int j=0;j<2;j++){
            cout<<query[i][j]<<" ";
        }
        cout<<endl;
 
    }*/
 
    sort(p, p + n, greater<int>());
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
        maxval[i + 1] = sum;
    }
 
    /*for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
 
    }
    cout<<endl; */
 
    int i = 0;
    while (q--)
    {
        int x = query[i][0];
        int y = query[i][1];
        cout << maxval[x] - maxval[x - y] << endl;
        i++;
    }
    return 0;
}