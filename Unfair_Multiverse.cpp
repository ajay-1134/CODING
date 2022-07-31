#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mx = INT_MIN, mn = INT_MAX;
    for(int i=0; i<n; i++){
        mn = min(mn,arr[i]);
        mx = max(mx,arr[i]);
    }
    return 0;
}