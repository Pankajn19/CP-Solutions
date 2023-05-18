#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        bool issame = true;
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]) issame=false;
        }
        if(issame) cout<<"NO";
        else{
            cout<<"YES\n";
            if(a[0]==a[1]){
                for(int i=2;i<n;i++){
                    if(a[i]!=a[1]){
                        swap(a[i],a[1]);
                        break;
                    }
                    
                }
            }
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}