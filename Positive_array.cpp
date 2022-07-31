#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626




// int func(vector<int>arr,int &cnt){
//     if(arr.size() == 0){
//         return cnt;
//     }
//     vector<int>v;
//     for(int i=0; i<arr.size();){
//         if(arr[i] < i+1){
//             v.push_back(arr[i]);
//             arr.erase(arr.begin() + i);
//         }
//         else{
//             i++;
//         }
//     }
//     cnt++;
//     func(v,cnt);
//     return cnt;

// }

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        vector<int> v[100001];
        // cout<<v[0].size()<<endl;
        int mx = INT_MIN;
        int cnt = 0;
        for(int i=0; i<n; i++){
            
            while(1){
                if(arr[i]>v[cnt].size()){
                    v[cnt].push_back(arr[i]);
                    break;
                }
                else cnt++;
                
            }
            mx = max(mx,cnt);
        }
        cout<<mx+1<<endl;
    }
    return 0;
}