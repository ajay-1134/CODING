#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int n,l;
cin>>n>>l;
vector<int>arr;
for(int i=0; i<n; i++){
    int val;
    cin>>val;
    arr.push_back(val);
}
sort(arr.begin(), arr.end());
int max_diff=arr[0] - 0;
for(int i=1; i<n; i++){
    max_diff = max(max_diff,arr[i]-arr[i-1]);
}
double res;
double temp = max(arr[0],l-arr[n-1]);
res = max(temp,max_diff/2.0);
cout<<fixed<<setprecision(10)<<res<<endl;
return 0;
}