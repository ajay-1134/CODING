#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnta=0, cntd=0;
    for(auto i:s){
        if(i == 'A') cnta++;
        else cntd++;
    }
    if(cnta > cntd) cout<<"Anton"<<endl;
    else if(cntd>cnta) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}