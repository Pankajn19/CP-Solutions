#include<iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int a[m][2];
        for(int i=0;i<m;i++){
            cin>>a[i][0]>>a[i][1];
 
        }
        if(m<n){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}