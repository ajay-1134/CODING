#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int cnt1 = 0;
        int a1[3];
        for(int i=0; i<3; i++){
            cin>>a1[i];
            if(a1[i] == 1) cnt1++;
        }
        int cnt2= 0;
        int a2[3];
        for(int i=0; i<3; i++){
            cin>>a2[i];
            if(a2[i] == 1) cnt2++;
        }
        if(cnt1 == cnt2) cout<<"Pass"<<endl;
        else cout<<"Fail"<<endl;

    }
}