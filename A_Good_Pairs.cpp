#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        int arr[n];
        int x,y;
        int mn = INT_MAX, mx = INT_MIN;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mx = max(mx,arr[i]);
            mn = min(mn,arr[i]);
        }
        for(int i=0; i<n; i++){
            if(arr[i] == mn) x = i;
            if(arr[i] == mx) y = i;
        }
        // sort(arr,arr+n);
        cout<<x+1<<" "<<y+1<<endl;
    }
}