#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>lx(n),rx(n);
        for(int i=0; i<n; i++){
            cin>>lx[i];
        }
        for(int i=0; i<n; i++){
            cin>>rx[i];
        }
        int cnt = 0;
        for(int i=0; i<n-1; i++){
            cnt += min(lx[i+1], rx[i]);
        }
        cout<<cnt<<endl;
    }
}