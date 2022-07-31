#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '1') ans+=a1;
        else if(s[i] == '2') ans+=a2;
        else if(s[i] == '3') ans+=a3;
        else ans+=a4;
    }
    cout<<ans<<endl;
    return 0;
}