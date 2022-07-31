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
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int sum=0, cnt = 0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum<n) cnt++;
            else break;
            
        }
        cout<<cnt<<endl;

    }
    return 0;
}