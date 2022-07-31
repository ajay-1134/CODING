#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    int var = 1;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 'F') continue;
            else{
                if(st.size() == 0){
                    st.push(s[i]);
                }
                else if(st.top() == s[i]){
                    continue;
                }
                else{
                    st.pop();
                    cnt++;
                    st.push(s[i]);
                }
            }
        }
        cout<<"Case #"<<var<<": "<<cnt<<endl;
        var++;
    }
}