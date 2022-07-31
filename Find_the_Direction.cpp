#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4 == 0) cout<<"North"<<endl;
        else if(n%4 == 1) cout<<"East"<<endl;
        else if(n%4 == 2) cout<<"South"<<endl;
        else cout<<"West"<<endl;
    }
    return 0;
}