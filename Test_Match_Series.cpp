#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int arr[5];
        int in=0,en= 0;
        for(int i=0; i<5; i++){
            cin>>arr[i];
            if(arr[i] == 1) in++;
            else if(arr[i] == 2) en++;
        }
        if(in>en) cout<<"INDIA"<<endl;
        else if(in<en) cout<<"ENGLAND"<<endl;
        else cout<<"DRAW"<<endl;
    }
    return 0;
}