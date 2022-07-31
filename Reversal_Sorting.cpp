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
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        priority_queue<int> max_heap;
        max_heap.push(arr[0]);

        int f = 0;

        for(int i = 1; i < n; i++){
            if((max_heap.top() > arr[i]) && (max_heap.top() + arr[i]) > k){
                f = 1;
            }
            max_heap.push(arr[i]);
        }

        if(f == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        int flag = 0;
        int mxl[n];
        mxl[0] = arr[0];
        for(int i=1; i<n; i++){
            if(mxl[i-1] > arr[i] && mxl[i-1] + arr[i] > k ){
                flag = 1;
                break;
            }
            mxl[i] = max(mxl[i-1], arr[i]);

        }
        
        if(flag == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}