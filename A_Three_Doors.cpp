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
        int x;
        cin>>x;
        int arr[3];
        for(int i=0; i<3; i++){
            cin>>arr[i];
        }
        if(arr[x-1] != 0 && arr[arr[x-1] - 1] != 0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}