#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long t; cin>>t;
    while(t--){
        
       long long n; cin>>n;
       long long a[n],b[n];
       for(long long i=0;i<n;i++) cin>>a[i];
       for(long long i=0;i<n;i++) cin>>b[i];
        if(n==1) cout<<a[0]<<endl;
       else if(n==2) cout<<min((a[0]+a[1]+b[0]),(a[0]+a[1]+b[1]))<<endl;
       else{
       long long time = 0;
       long long i = 0, j = n-1;
       while(i<j){
        if(b[i]<b[j]){
            time+=a[i];
              a[i+1]+=b[i];
             i++;
        }
        else {
            time+=a[j];
            a[j-1]+=b[j];
            j--;
        }
       }
       time+=a[i];
      
       cout<<time<<endl;
       }
        
    }
    
    return 0;
}