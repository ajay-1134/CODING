#include<bits/stdc++.h>
using namespace std;
#define int long long int

int is_prime[1000001];
void sieve(){
    int maxN = 1000000;
    for(int i=1; i<=maxN; i++){
        is_prime[i] = 1;
    }
    is_prime[0] = is_prime[1] = 0;
    for(int i=2; i*i<=maxN; i++){
        if(is_prime[i]){
            for(int j=i*i; j<=maxN; j= j+i){
                is_prime[j] = 0;
            }
        }
    }
}


signed main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        string n;
        cin>>n;
        for(int i=0; i<k; i++){
            if(n[i] == '1' || n[i] == '4' || n[i] == '6' || n[i] == '8' || n [i] == '9' ){
                cout<<"1"<<endl<<n[i]<<endl;
                break;
            }
        }
        sieve();
        for(int i=0; i<k; i++){
            for(int j=i+1; j<k; j++){
                if(is_prime[n[i] * 10 + n[j]] == 1){
                    cout<<""
                }
            }
        }
    }
    return 0;
}