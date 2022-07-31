#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        map<int, bool> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]] = 1;
        }
        int flag = 0;
        for(int i=0; i<n; i++){
            if(mp[arr[i] - k]) {
                flag = 1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(flag == 0) cout<<"NO"<<endl;

    }
}