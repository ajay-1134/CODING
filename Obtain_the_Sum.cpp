#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int val =  ( n*(n+1)/2 ) - s;
        if(val <= n && val > 0) cout<<val<<endl;
        else cout<<-1<<endl; 
    }
    return 0;
}