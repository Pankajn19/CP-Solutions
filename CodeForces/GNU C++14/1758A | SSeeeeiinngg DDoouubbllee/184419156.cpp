#include<bits/stdc++.h>
using namespace std;
int main(){
     int t; cin>>t;
     while(t--){
          string s; cin>>s;
          string t = s;
          int n = s.size();
          int i=0,j=n-1;
          while(i<j){
               swap(s[i],s[j]);
               i++;
               j--;
          }
          
          cout<<s+t<<endl;
     }
     
     
     
     return 0;
}