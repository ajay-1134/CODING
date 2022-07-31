#include<bits/stdc++.h>
using namespace std;
#define int long long int

int gcd(int a, int b){
    int n = min(a,b);
    for(int i=n; i>0; i--){
        if(a%i == 0 && b%i == 0){
            return i;
        }
    }
    return -1;
}


signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<gcd(a,b)<<" "<<(a*b)/gcd(a,b)<<endl;
    }
    return 0;
}