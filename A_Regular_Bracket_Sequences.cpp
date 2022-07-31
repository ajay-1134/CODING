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
        string s = "";
        for(int i=0; i<n; i++){
            s += "(";
        }
        for(int i=0; i<n; i++){
            s += ")";
        }

        for(int i=0; i<n; i++){
            cout<<s<<endl;
            
        }
    }
    return 0;
}