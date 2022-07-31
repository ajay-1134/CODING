#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        int mx=0,arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n-1; i++){
            mx = max(mx,arr[i]);
        }
        int flag = 0;
        if(n == 1) flag = 1;
        if( arr[n-1] > mx ) flag = 1;
        else{
            if(k > 0){
                int var = (l-1)*k;
                if(arr[n-1] + var > mx) flag = 1;
            }
        }
        if(flag == 1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
}