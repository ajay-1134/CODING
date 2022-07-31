#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int flag=0;
        if(n == 1) flag =1;
        for(int i=2; i*i<=n; i++){
            if(n%i == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 1) cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
    return 0;
}