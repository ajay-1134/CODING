#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans = n-k;
        int arr[ans];
        int var = k+1;
        for(int i=0; i<ans; i++){
            arr[i] = var;
            var++;
        }
        if(ans%2 != 0) swap(arr[0],arr[ans/2]);

        if(ans!=1){
            for(int i=1; i<=k; i++){
                cout<<i<<" ";
            }
            for(int i=ans-1; i>=0; i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else cout<<"-1"<<endl;
    }
    return 0;
}