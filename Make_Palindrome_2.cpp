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
        string s;
        cin>>s;
        int zeroes = 0;
        int ones = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '0') zeroes++;
            else ones++;
        }
        string ans = "";
        // cout<<ans<<endl;
        if(zeroes < ones){
            for(int i=0; i<(n-zeroes); i++){
                ans+="1";
            }
        }
        else{
            for(int i=0; i<(n-ones); i++){
                ans+="0";
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}