#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool comp(pair<int,int>a, pair<int,int>b){
    return a.first < b.first;
}

signed main(){
    int n, x;
    cin>>n>>x;
    vector<pair<int,int>> arr;
    for(int i=0; i<n; i++){
        int val1,val2;
        cin>>val1>>val2;
        arr.push_back({val1, val2});
    }
    sort(arr.begin(),arr.end(),comp);
    int ptr = 1;
    int ind = 0, ans = 0;
    while(ind < n){
        if((ptr+x) <= arr[ind].first){
            ptr += x;
        }
        else{
            ans += (arr[ind].second - arr[ind].first + 1) + (arr[ind].first - ptr);
            ptr = arr[ind].second + 1;
            ind++;
        }
    }
    cout<<ans<<endl;
}