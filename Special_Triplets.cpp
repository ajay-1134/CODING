#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt =0;
        for(int c = 1; c <= n; c++){
            for(int b = c; b <= n; b += c){
                int x = 1;
                while(1){
                    int a = b * x + c;
                    if(a <= n){
                        cnt++;
                    } else {
                        break;
                    }
                    x++;
                }
            }
        }
        // for(int i=1; i<=n; i++){
        //     for(int j=i; j<=n; j+=i){
        //         for(int k=1; k<n; k++){
        //             cout<<i<<" "<<j<<" "<<k<<endl;
        //             if(i%j == k && j%k == 0){
        //                 cnt++;
        //                 // cout<<i<<" "<<j<<" "<<k<<endl;
        //             }
        //         }
        //     }
        // }
        // // cout<<cnt<<" "<<n*(n-1)/2 <<endl;
        cout << cnt << endl;
    }
    return 0;
}