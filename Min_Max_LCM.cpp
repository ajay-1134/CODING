#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        int l = x, r = x*k;
        int mnres , mxres;
        if(r>=x*2){
            mnres = x*2;
        }
        else mnres = r;
        mxres = r * (r-1);
        cout<<mnres<<" "<<mxres<<endl;
    }
}