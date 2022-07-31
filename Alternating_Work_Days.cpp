#include<bits/stdc++.h>
using namespace std;
#define int long long int 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        if( ( p%a == 0 && q%b==0 && abs((q/b) - (p/a)) <=1 ) ){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}