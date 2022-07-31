#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int q,p;
        cin>>q>>p;
        double ans = q * p;
        if(q > 1000) ans = ans -  (ans/10);
        // std::cout << std::fixed;
        cout<<std :: setprecision(6)<<std::fixed<<ans<<endl;
    }
}