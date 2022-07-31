#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    int total_sum = 0;
    int upper_sum = 0;
    for(int i=0; i<n; i++){
        int upper,lower;
        cin>>upper>>lower;
        upper_sum += upper;
        total_sum += (upper+lower);
        v.push_back({upper,lower});
    }
    int ans = -1;
    if(total_sum % 2 == 0 && upper_sum % 2 == 0 && (total_sum-upper_sum)%2 == 0){
        ans = 0;
    }
    else if(total_sum%2 == 0 && upper_sum % 2 == 1 && (total_sum-upper_sum)%2 == 1 ) ans = 1;
    cout<<ans<<endl;

    return 0;
}