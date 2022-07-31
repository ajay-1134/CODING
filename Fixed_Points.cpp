#include<bits/stdc++.h>
using namespace std;
#define int long long int 

int fxdpoints(int arr[], int n){
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == i+1) cnt++;
    }
    return cnt;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            if(arr[i] <= (i+1) ) ans+=(n-i);
        }
        cout<<ans<<endl;
    }
}