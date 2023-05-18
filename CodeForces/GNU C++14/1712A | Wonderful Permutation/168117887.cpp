#include<iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,k;
         cin>>n>>k;
  
        int a[n];
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(n==k){
            cout<<0<<endl;
        }
        else {
            unordered_set <int> b; 
            for(int i=0;i<k;i++){
                b.insert(a[i]);
            }
                int d[k] = {0};
           
             for(int i=0;i<k;i++){
                 if(b.find(i+1) != b.end()){
                     d[i]=1;
                 }
             }
             int zer=0;
             for(int i=0;i<k;i++){
                 if(!d[i]){
                     zer++;
                 }
             }
             cout<<zer<<endl;
        }
        
    }
    return 0;
}