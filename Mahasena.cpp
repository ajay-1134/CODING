#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int n;
    cin>>n;
    int arr[n];
    int od = 0, ev=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2==0)ev++;
        else od++;
    }
    if(ev>od){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else cout<<"NOT READY"<<endl;
    return 0;
}