#include<bits/stdc++.h>
using namespace std;
#define int long long int



signed main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int ans = r % (max( (r/2)+1,l));
        cout<<ans<<endl;
    }
    return 0;
}