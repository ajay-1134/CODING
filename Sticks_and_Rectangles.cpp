#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int cnt = 0;
        // cout<<endl<<endl;
        // for(auto i:mp){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // cout<<endl<<endl;
        map<int,int> :: iterator it;
        for(it = mp.begin(); it!=mp.end(); it++){
            if(it->second% 2 == 1){
                it->second++;
                cnt++;
            }
        }
        // cout<<endl<<endl;
        // for(auto i:mp){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // cout<<endl<<endl;;
        int sum = 0;
        for(auto i : mp){
            sum += i.second;
        }
        if(sum%4 != 0){
            cnt += (4 - sum%4);
        }
        cout<<cnt<<endl;

    }
    return 0;
}