#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0; i<n; i++){
            if(i%2 == 0) {
                mp1[s[i]]++;
            }
            else mp2[s[i]]++;
        }
        int flag = 0;
        for(int i=0; i<26; i++){
            if(mp1['a'+i] != mp2['a'+i]){
                flag = 1;
                break;
            }
        }
        if(flag == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}