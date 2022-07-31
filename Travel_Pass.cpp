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
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '0') cnt += a;
            else cnt += b;
        }
        cout<<cnt<<endl;
    }
    return 0;
}