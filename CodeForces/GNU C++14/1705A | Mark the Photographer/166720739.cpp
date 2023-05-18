#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
 
        int n,x; cin>>n>>x;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a,a+2*n);
        for(int i=0;i<n;i++){
            a[i]+=x;
        }
        
        int flag=0;
        for(int i=0;i<n;i++){
            if(a[i]<=a[i+n]){
                flag++;
 
            }
        }
        if(flag==n){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
      
    }
    return 0;
}