#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int zeroes = 0, ones = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                zeroes++;
            }
            else ones++;
        }
        if(zeroes == ones) cout<< 2 * zeroes<<endl;
        else cout<<min(zeroes,ones) * 2 + 1<<endl;
    }
    
}