#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int m,n,k;
        cin>>m>>n>>k;
        if(n*k < m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}