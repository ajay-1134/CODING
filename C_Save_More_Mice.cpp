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
        int arr[n];
        int steps_mice = 0;
        int steps_cat = 0;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            steps_cat+=arr[i];
            steps_mice += (n-arr[i]);
            a[i] = n-arr[i];
        }
        int ans = steps_cat - ;
        int res = 0;
        sort(a,a+n);
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++){
            if(ans < a[i]) break;
            ans -= a[i];
            res++;
        }
        cout<<res<<endl;
    }
    return 0;
}