#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

bool func(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return false;
    }
    return true;
}


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
        int flag = 0;
        for(int i=0; i<n-3; i++){
            // cout<<func(s[i])<<" "<<func(s[i+1])<<" "<<func(s[i+2])<<" "<<func(i+3)<<" ";
            if(func(s[i]) && func(s[i+1]) && func(s[i+2]) && func(s[i+3]) ){
                flag = 1;
                break;
            }
        }
        if(flag == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}