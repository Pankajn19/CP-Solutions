#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int odd=0;
        int mini = 10000000001;
         for(int i=0;i<n;i++){
            if(a[i]%2){
                odd++;
 
                
            }
        }
        if(odd%2==0) cout<<0<<endl;
        else{
        for(int i=0;i<n;i++){
            if(a[i]%2){
                  int cnt=0;
                
                while(a[i]%2){
                  
                    a[i]/=2;
                    cnt++;
                }
                if(cnt<mini) mini = cnt;
 
                
            }
            else{
                int cnt = 0;
                while(a[i]%2==0){
                    a[i]/=2;
                    cnt++;
                    
                }
                if(cnt<mini) mini=cnt;
            }
        }
        cout<<mini<<endl;
        }
        
 
    }
    return 0;
}