#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if( (arr[i] ^ arr[j]) < (arr[i] & arr[j])){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}