#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

vector<string>v;

void solve(string ip, string op, int index){
    if(index == ip.length()-1){
        v.push_back(op);
        return;
    }

    if(ip[index] != '?'){
        op += ip[index];
        index++;
        solve(ip,op,index);
    }
    else{
        string op1 = op+'(';
        string op2 = op+')';
        index++;

        solve(ip,op,index);
    }
    // return;
}


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        string op = "";
        int index = 0;
        solve(s,op,index);
        for(auto i : v){
            cout<<i<<endl;
        }
        int cnt=0;
        for(auto i: v){
            int flag = 0;
            int temp = 0;
            for(auto j:i){
                if(temp < 0 || temp >i.length()){
                    break;
                    flag = 1;
                }
                if(j == '(') temp++;
                else temp--;
            }
            if(flag == 0){
                cnt++;
            }
        }
        v.clear();
        if(cnt == 1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}