#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s,t;
    cin>>s>>t;
    int ptr = 0;
    for(int i=0; i<t.length(); i++){
        if(t[i] == s[ptr]){
            ptr++;
        }
    }
    cout<<ptr+1<<endl;
    return 0;
}