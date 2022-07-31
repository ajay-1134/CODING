#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans=0;
        int i=0;
        while(i<p){
            if(arr[i] == 0) ans+=x;
            else ans+=y;
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}