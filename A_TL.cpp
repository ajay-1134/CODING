#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int n,m;
    cin>>n>>m;
    int right[n],wrong[m];
    int mx1=0,mn1=INT_MAX;
    for(int i=0; i<n; i++){
        cin>>right[i];
        mx1 = max(mx1,right[i]);
        mn1 = min(mn1,right[i]);
    }
    int mn=INT_MAX;
    for(int i=0; i<m; i++){
        cin>>wrong[i];
        mn = min(mn,wrong[i]);
    }
    if(mn<=mx1) cout<<"-1"<<endl;
    else{
        int flag=0;
        for(int i=mx1; i<mn; i++){
            if(2*mn1<=i){ 
                cout<<i<<endl;
                flag=1;
                return 0;
            }
        }
        if(flag==0) cout<<"-1"<<endl;
    }
}