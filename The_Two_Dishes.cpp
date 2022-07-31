#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        if(s<=n) cout<<s<<endl;
        else cout<<n - abs(n-s)<<endl;
    }
    return 0;
}