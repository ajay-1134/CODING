#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int m,n;
    cin>>m>>n;
    int arr[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int ans = 0,i=0;
    while(arr[i]<0 && i<n){
        ans+=abs(arr[i]);
        i++;
    }
    cout<<ans<<endl;
}