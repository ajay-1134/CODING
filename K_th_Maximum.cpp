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
        int mx = 0;
        for(int i=0; i<n; i++){
            mx = max(mx,arr[i]);
        }
        // cout<<mx<<endl;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == mx){
                if(i+1 >= k){
                    ans+=(n-1-i+1);
                }
            }
        }
        cout<<ans<<endl;
        // cout<<cnt<<endl;
    }
    return 0;
}