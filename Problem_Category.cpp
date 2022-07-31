#include<bits/stdc++.h>
using namespace std;
#define int long long int 

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>=1 && n < 100){
            cout<<"Easy"<<endl;
        }
        else if(n>=100 && n<200){
            cout<<"Medium"<<endl;
        }
        else cout<<"Hard"<<endl;
    }
}