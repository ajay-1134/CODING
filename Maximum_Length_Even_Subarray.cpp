#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // int var = n;
        // while( (var * (var+1) /2 ) % 2 != 0){
        //     var--;
        // }
        // cout<<var<<endl;
        if( (n*(n+1)/2) % 2 == 0) cout<<n<<endl;
        else cout<<n-1<<endl;
    }
    return 0;
}