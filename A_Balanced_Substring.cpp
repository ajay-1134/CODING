#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l = -1,r = -1;
        for(int i=0; i<n-1; i++){
            if( (s[i] == 'a' && s[i+1] == 'b') || (s[i] == 'b' && s[i+1] == 'a') ){
                l = i+1;
                r = i+2;
                break;
            }
        }
        cout<<l<<" "<<r<<endl;
    }
}