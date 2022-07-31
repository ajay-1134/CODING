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
        int var = n;
        int cnt1 = 0,cnt2 = 0;
        int flag1 = 0,flag2 = 0;
        while(n){
            if(n%10 == 0 && flag1 == 0){
                flag1 = 1;
                n/=10;
                continue;
            }
            if(flag1 == 1 && (n%10==0 || n%10 == 5)){
                flag1 = 2;
                break;
            }
            n/=10;
            cnt1++;
        }
        // cnt1--;
        // if(cnt1<0) cnt1 = 0;
        n = var;
        while(n){
            if(n%10 == 5 && flag2 == 0){
                flag2 = 1;
                n/=10;
                continue;
            }
            if(flag2 == 1 && (n%10==2 || n%10 == 7)){
                flag2 = 2;
                break;
            }
            n/=10;
            cnt2++;
        }
        // cnt2--;
        // if(cnt2<0) cnt2 = 0;
        int ans;

        // cout<<flag1<<" "<<flag2<<endl;
        // cout<<cnt1<<" "<<cnt2<<endl;


        if(flag1==2 && flag2 == 2){
            ans = min(cnt1,cnt2);
        }
        else if(flag1 == 2) ans = cnt1;
        else if(flag2 == 2) ans = cnt2;
        cout<<ans<<endl;
    }
    return 0;
}