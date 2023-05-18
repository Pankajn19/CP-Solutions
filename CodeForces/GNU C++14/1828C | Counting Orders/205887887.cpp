#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int cnt(int arr[], int n, int k){
     int l = 0;
    int r = n - 1;
 
   
    int leftGreater = n;
 
    
    while (l <= r) {
        int m = l + (r - l) / 2;
 
       
        if (arr[m] > k) {
            leftGreater = m;
            r = m - 1;
        }
 
       
        else
            l = m + 1;
    }
 
    
    return n - leftGreater;
}
void solve(){
    int n; cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    reverse(b,b+n);
    long long ans = 1;
    for(int i=0;i<n;i++){
        int x = cnt(a,n,b[i]);
        ans*=(x-i);
        ans%=mod;
    }
    
    cout<<ans%mod<<endl;
    
 
 
}
int main()
{
    int t; cin>>t;
    while(t--) solve();
    return 0;
}