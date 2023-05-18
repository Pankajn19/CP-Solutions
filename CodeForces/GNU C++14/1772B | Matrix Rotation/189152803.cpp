#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        bool flag = false;
        if(a<b && a<c && b<d && c<d) flag = true;
        for(int i=1;i<4;i++){
            int temp = a;
            int tempx = b;
            a = c;
            c = d;
            b = temp;
            d = tempx;
            if(a<b && a<c && b<d && c<d) flag = true;
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
   
        
    return 0;
}