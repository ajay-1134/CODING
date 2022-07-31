#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int cnt = 0;
        int i=0;
        int flag = 0;
        while(i<n){
            if(s[i] == '0'){
                if(flag == 0)
                cnt++;
                i++;
                flag=1;
            }
            else{
                if(flag == 1) cnt++;
                i++;
                flag=0;

            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}