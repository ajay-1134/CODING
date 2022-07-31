#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        char c1,c2,c3;
        cin>>c1>>c2>>c3;
        char x,y;
        cin>>x>>y;
        if(x == c1 || y == c1){
            cout<<c1<<endl;
        }
        else if(x == c2 || y == c2){
            cout<<c2<<endl;
        }
    }
}