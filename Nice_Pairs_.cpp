#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        int cnt = 0;
        cin>>s;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<i+10; j++){
                    if(j<n){
                        if(j-i == abs( (s[j]-'0') - (s[i]-'0') )){
                        cnt++;
                    }
                }
                
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}