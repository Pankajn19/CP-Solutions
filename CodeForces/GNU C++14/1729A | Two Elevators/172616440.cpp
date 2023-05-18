#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x = abs(b-c) + abs(c-1);
     int y  = abs(a-1);
     if(x<y){
        cout<<2<<endl;
     }
     else if(x>y){
        cout<<1<<endl;
    
     }
     else cout<<3<<endl;
    // cout<<x<<" "<<y<<endl;
    }
    
 
     
    return 0;
}