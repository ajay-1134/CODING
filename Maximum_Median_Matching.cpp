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
        int n;
        cin>>n;
        vector<int>boys(n);
        vector<int>girls(n);
        for(int i=0; i<n; i++){
            cin>>boys[i];
        }
        for(int i=0; i<n; i++){
            cin>>girls[i];
        }
        sort(boys.begin(),boys.end());
        sort(girls.begin(),girls.end());
        int k = n/2;
        reverse(girls.begin()+k, girls.begin()+n);
        vector<int>c;
        for(int i=n/2; i<n; i++){
            c.push_back(boys[i]+girls[i]);
        }
        sort(c.begin(), c.end());

        cout<<c[0]<<endl;
    }
    return 0;
}