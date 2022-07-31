#include<bits/stdc++.h>
using namespace std;
#define int long long int

//native approach
int power1(int base, int n){
    int res=1;
    for(int i=0; i<n; i++){
        res*=base;
    }
    return res;
}

//binary exponentiation
int power2(int base,int n){
    int res = 1;
    while(n){
        if(n%2 == 0){
            base *= base;
            n /=2;
        }
        else{
            res*=base;
            n--;
        }
    }
    return res;
}

signed main(){
    int a = 5, n = 7;
    cout<<power1(a,n)<<endl;
    cout<<power2(a,n)<<endl;
    return 0;
}