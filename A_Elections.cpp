#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans1 = (max(b,c) - a)+1, ans2 = (max(a,c) - b)+1, ans3 = (max(a,b) - c)+1;
        if(ans1<0) ans1=0;
        if(ans2<0) ans2=0;
        if(ans3<0) ans3=0;
        cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
    }
    return 0;
}