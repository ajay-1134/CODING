#include<bits/stdc++.h>
using namespace std;
#define int long long int

int isPrime[1000001];

void sieve(int maxN){

    isPrime[0]= isPrime[1] = 0;

    for(int i=2; i<maxN; i++){
        isPrime[i] = 1;
    }
    for(int i=2; i*i <= maxN; i++){
        if(isPrime[i] == 1){
            for(int j=i*i; j<=maxN; j+=i){
                isPrime[j] = 0;
            }
        }
    }
    for(int i=0; i<maxN; i++){
        if(isPrime[i] == 1) cout<<i<<endl;
    }
}

signed main(){
    sieve(100);
    return 0;
}