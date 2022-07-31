#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int ans;
        if(m==1 && n==1) ans = 0;
        else if(m ==1 || n == 1) ans = 1;
        else ans = 2; 
        cout<<ans<<endl;
    }
}