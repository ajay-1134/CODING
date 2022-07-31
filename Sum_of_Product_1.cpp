#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans = 0;
        for(int i=0; i<n; ){
            if(arr[i] == 1){
                int cnt = 0;
                while(i < n && arr[i] == 1 ){
                    i++;
                    cnt++;
                }
                ans+=(cnt * (cnt+1)/2);
            }
            i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}