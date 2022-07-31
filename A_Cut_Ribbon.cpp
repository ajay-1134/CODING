#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int arr[3] = {a,b,c};
    sort(arr,arr+3);
    int ans = n/arr[0];
    int rem = n%arr[0];
    if(rem != 0){
        while(rem <= n){
            if(rem % arr[1] == 0){
                ans += (rem/arr[1]);
                break;
            }
            else if(rem % arr[2] == 0){
                ans += (rem/arr[2]);
                break;
            }
            else if(rem%(arr[1]+arr[2]) == 0){
                ans += (2 * (rem/(arr[1]+ arr[2])));
                break;
            }
            ans--;
            rem += arr[0];

        }
    }
    cout<<ans<<endl;
    
}