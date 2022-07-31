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
        int flag = 0;
        for(int i=0; i<n; i++){
            if( (s[i] - '0') % 5 == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}