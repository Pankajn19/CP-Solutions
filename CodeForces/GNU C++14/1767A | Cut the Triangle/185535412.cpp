#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        bool flag = false;
        int x1,x2,x3,y1,y2,y3; cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if((x1<x2 && x1>x3) || (x1>x2 && x1<x3) ) flag = true;
        if((y1<y2 && y1>y3) || (y1>y2 && y1<y3)) flag = true;
         
        if((x2<x1 && x2>x3) || (x2>x1 && x2<x3) ) flag = true;
        if((y2<y1 && y2>y3) || (y2>y1 && y2<y3)) flag = true;
        
        
        if((x3<x1 && x3>x2) || (x3>x1 && x3<x2) ) flag = true;
        if((y3<y1 && y3>y2) || (y3>y1 && y3<y2)) flag = true;
        
        
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
        
        
        
    }
    return 0;
}