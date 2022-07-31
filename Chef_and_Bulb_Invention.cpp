#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,p,k;
        cin>>n>>p>>k;
        int ans;
        if(n%k == 0){
            ans = (p%k)*(n/k) + (p/k + 1);
        }
        cout<<ans<<endl;

    }
    return 0;
}