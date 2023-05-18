#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        stack<char> st;
        st.push(s[0]);
        string ans = "";
        for(int i=1;i<n;i++){
            if(st.top()=='1' && s[i]=='1'){
                ans+="-";
                st.push('0');
            }
            else {
                ans+="+";
                if(st.top()=='0' && s[i]=='0') st.push('0');
                else st.push('1');
               
            }
            
        }
        cout<<ans<<endl;
        
            
        
            
        }
      
    
    return 0;
}