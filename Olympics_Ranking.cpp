#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a1,b1,c1,a2,b2,c2;
        cin>>a1>>b1>>c1>>a2>>b2>>c2;
        if(a1+b1+c1 > a2+b2+c2) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
    return 0;
}