#include<bits/stdc++.h>
using namespace std;
#define int long long int 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int var = 1;
        cout<<"1 1"<<" ";
        while(--n){
            var *= 2;
            cout<<var<<" ";
        }
        cout<<endl;
    }
}