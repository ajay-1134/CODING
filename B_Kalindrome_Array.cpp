#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool check(int n, int arr[]){
    for(int i=0; i<n/2; i++){
        if(arr[i]!=arr[n-i-1]){
            return false;
        }
    }
    return true;
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

    }
}