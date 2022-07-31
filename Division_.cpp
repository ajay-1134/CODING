#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int ans = 0;
        while(n!=1){
            int x ;
            int flag = 0;
            if(a>=b && n%2 == 0){
                x = 2;
                flag = 1;
            }
            else if(b>a && n%2!=0){
                x=3;
                while(x<=n){
                    if(n%x == 0){
                        flag = 1;
                        break;
                    }
                    x+=2;
                }
            }
            else{
                int var = 2;
                int odd,oddflag = 0, evenflag = 0,even;
                while(var<=n && (oddflag==0 || evenflag == 0) ){
                    if(n%var == 0){
                        if(var%2 == 0 && evenflag == 0){
                            even = var;
                            evenflag = 1;
                        }
                        else if(var%2!=0 && oddflag == 0){
                            oddflag = 1;
                            odd = var;
                        }
                    }
                    var++;
                }
                if(oddflag == 1 && evenflag == 1){
                    if(a>=b){
                        x = even;
                    }
                    else x = odd;
                }
                else if(oddflag == 1 && evenflag == 0) x = odd;
                else if(evenflag == 1 && oddflag == 0) x = even;
            }
            n = n/x;
            if(x%2 == 0) ans+=a;
            else ans+=b;
        }
        cout<<ans<<endl;
    }
    return 0;
}