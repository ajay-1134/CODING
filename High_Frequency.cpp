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
        int arr[n];
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int mx = INT_MIN;
        for(auto i: mp){
            mx = max(mx,i.second);
        }
        int mx1 = INT_MIN;
        int flag = 0;
        for(auto i:mp){
            if(i.second == mx && flag == 0){
                flag = 1;
                continue;
            }
            mx1 = max(mx1,i.second);
        }

        if(mx1 < 0){
            cout<<(mx+1)/2<<endl;
        }
        else{
            cout<<max(mx1,(mx+1)/2 )<<endl;
        }

    }
    return 0;
}