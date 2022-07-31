#include<bits/stdc++.h>
using namespace std;
#define int long long int

int med(int k, int arr[]){
    sort(arr,arr+k);
    return arr[(k-1)/2];
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if( (a <= e && b + c <= d) || (b <= e && a + c <= d) || (c <= e && b + a <= d) ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}