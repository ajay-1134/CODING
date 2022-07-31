#include<bits/stdc++.h>
using namespace std;
#define int long long int


// brute-force approach
void primeFact1(int n){
    for(int i=2; i<=n; i++){
        if(n%i == 0){
            int cnt = 0;
            while(n%i == 0){
                cnt++;
                n/=i;
            }
            cout<<i<<"^"<<cnt;
            if(n>1) cout<<"*";
        }
    }
    cout<<endl;
}

void primeFact2(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            int cnt=0;
            while(n%i == 0){
                cnt++;
                n/=i;
            }
            cout<<i<<"^"<<cnt;
            if(n>1) cout<<"*";
        }
    }
    if(n>1) cout<<n<<"^"<<"1"<<endl;
}

signed main(){
    int n = 32;
    primeFact1(n);
    primeFact2(n);
    return 0;
}