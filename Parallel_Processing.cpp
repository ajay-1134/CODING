#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int sum=0;
        for(int i=0; i<n; i++){
            int var;
            cin>>var;
            sum+=var;
            v.push_back(var);
        }
        int curr_sum = 0;
        int ans = sum;
        int p = 0;
        for(int i=0; i<n; i++){
            curr_sum += v[i];
            p = max(curr_sum, sum);
            ans = min(p, ans);
        }
        cout<<ans<<endl;
    }
}