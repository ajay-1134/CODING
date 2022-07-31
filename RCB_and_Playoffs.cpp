#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x+2*z >= y) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}