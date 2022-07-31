#include<bits/stdc++.h>
using namespace std;
#define int long long int

int check(vector<int>v){
    int n = v.size();
    for(int i=0; i<n; i++){
        if(v[i] == i+1){
            return i;
        }
    }
    return -1;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k = n+1;
        vector<int>v;
        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            v.push_back(val);
        }
        // for(int i=0; i<n; i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        int cnt = 0, cnt1= 0;
        for(int i=0; i<n; i++){
            if(v[i] == i+1) cnt1++;
        }
        // cout<<cnt1<<endl;
        while(check(v) != -1){
            vector<int>::iterator it;
            it = v.begin() + check(v);
            v.insert(it,k);
            cnt++;
        }
        cout<<cnt<<endl;
    }
}