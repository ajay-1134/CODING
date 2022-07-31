#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int ans;
        if(x<=y){
            ans = (y-x)/2;
            if((y-x)%2 != 0) ans += 2;
        }
        else ans = (x-y);
        cout<<ans<<endl;
    }
}