#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = n;
        // cout<<n<<endl;
        int cnt = 0;
        while(n){
            if(n%10 == 9){
                cnt++;
                n/=10;
            } 
            else break;
        }
        if(cnt%2 == 0) cout<<x+1<<endl;
        else cout<<x+2<<endl;

    }
    return 0;
}