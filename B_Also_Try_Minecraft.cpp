#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626



void solve(vector<int>arr, int n, vector<pair<int,int>>vp, int m){
    
    return;

}


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<pair<int,int>>v;
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    // solve(arr,n,v,m);
    vector<int>fdf(n);
    vector<int>fdb(n);
    fdf[0] = 0;
    // cout<<fdf[0]<<" ";
    for(int i=1; i<n; i++){
        int temp = 0;
        if(arr[i] < arr[i-1]){
            temp = arr[i-1] - arr[i];
        }
        fdf[i] = (fdf[i-1] + temp);
        // cout<<fdf[i]<<" ";
    }
    // cout<<endl;

    fdb[n-1] = 0;

    for(int i=n-2; i>=0; i--){
        int temp = 0;
        if(arr[i] < arr[i+1]){
            temp = arr[i+1] - arr[i];
        }
        fdb[i] = fdb[i+1]+temp;
    }
    // for(int i=0; i<fdf.size(); i++){
    //     cout<<fdf[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; i<fdb.size(); i++){
    //     cout<<fdb[i]<<" ";
    // }
    // cout<<endl;

    for(int i=0; i<m; i++){
        if(v[i].first <= v[i].second){
            cout<<fdf[v[i].second - 1] - fdf[v[i].first - 1]<<endl;
        }
        else{
            cout<<fdb[v[i].second -1] - fdb[v[i].first - 1]<<endl;
        }
    }
    
    return 0;
}