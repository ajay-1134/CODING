#include<bits/stdc++.h>
using namespace std;
#define int long long int

vector<int>primes;
bool is_prime[90000001];
void sieve(){
    int maxN = 90000000;
    is_prime[0] = is_prime[1] = true;
    for(int i=2; i*i<=maxN; i++){
        if(is_prime[i] == false){
            for(int j=i*i; j<=maxN; j+=i){
                is_prime[j] = true;
            }
        }
    }
    for(int i=2; i<maxN; i++){
        if(is_prime[i] == false) primes.push_back(i);
    }
}

signed main(){
    int t;
    cin>>t;
    sieve();
    while(t--){
        int n;
        cin>>n;
        cout<<primes[n-1]<<endl;
    }
    return 0;
}