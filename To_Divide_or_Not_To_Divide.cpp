#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 

signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int a,b,n;
        cin>>a>>b>>n;
        if(a%b == 0){
            cout<<"-1"<<endl;
            continue;
        }
        int rem = n%a;
        if(rem != 0){
            n += (a-rem);
        }
            
        while(1){
            if(n%b != 0){
                cout<<n<<endl;
                break;
            } 
            n+=a;
        }
    }
    return 0;
}