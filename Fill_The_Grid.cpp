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
        int n,m;
        cin>>n>>m;
        int ans;
        if(n%2 == 0 && m%2 == 0){
            ans = 0;
        }
        else if(n%2==1 && m%2 == 1){
            ans = (n+m-1);
        }
        else{
            if(n%2 == 0) ans = n;
            else ans = m;
        }
        cout<<ans<<endl;
    }
    return 0;
}