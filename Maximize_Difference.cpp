#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 1000000007;
#define PI 3.1415926535897932384626


signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int diff = INT_MIN;
        int a = n,b = m;
        for(int i=n; i<min(m,2*n); i++){
            int x = m/i;
            if(x*i - i >= diff){
                a = i;
                b = i*x;
                diff = b-a;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}