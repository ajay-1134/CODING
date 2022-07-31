#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        // while(l%3 != 0){
        //     l++;
        // }
        // while(r%3 != 0){
        //     r--;
        // }
        // int res = (r - l + 1)/3;
        // if(l > r){
        //     res = -1;
        // }

        // cout << res + 1<< endl;
        int num = r-l+1;
        int ans = num/3;
        if( (num%3 == 1 && l%3==0 ) || ( num%3 == 2  && (l%3 == 0 || l%3 == 2) ) ) ans++;
        cout<<ans<<endl;
    }
    return 0;
}