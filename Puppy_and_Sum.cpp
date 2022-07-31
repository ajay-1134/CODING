#include<bits/stdc++.h>
using namespace std;
#define int long long int

int sum(int n){
    return n*(n+1)/2;
}

int summ(int d,int n){
    int ans = sum(n);
    d--;
    while(d--){
        ans = sum(ans);
    }
    return ans;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int d,n;
        cin>>d>>n;
        cout<<summ(d,n)<<endl;
    }
    return 0;
}