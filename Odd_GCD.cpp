#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            int cnt = 0;
            while(arr[i]%2 == 0){
                cnt++;
                arr[i]/=2;
            }
            ans = min(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}