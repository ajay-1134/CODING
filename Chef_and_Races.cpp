#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int ans = 2;
        if(a == x || a == y){
            ans--;
        }
        if(b == x || b == y){
            ans--;
        }
        cout<<ans<<endl;
    }
}