#include<bits/stdc++.h>
using namespace std;
#define int long long int 


signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,v;
        cin>>n>>v;
        int min_cost = (n-v)*(n-v+1)/2  + v - 1;
        if(v >= n) min_cost = (n-1);
        int max_cost = n*(n-1)/2;

        cout<<max_cost<<" "<<min_cost<<endl;
    }
}