#include<bits/stdc++.h>
using namespace std;
#define int long long int

int med(int k, int arr[]){
    sort(arr,arr+k);
    return arr[(k-1)/2];
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int even = 0, odd = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] % 2 == 0) even++;
            else odd++;
        }
        int ans = min(n/2, odd);
        if(n%2 == 0){
            ans += min(n/2,even);
        }
        else ans += min(n/2 + 1 , even);
        cout<<ans<<endl;
    }
    return 0;
}