#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink_in_ml = k * l;
    int total_slices = c*d;
    int res = min(total_drink_in_ml/nl, min(total_slices, p/np));
    cout<<res/n<<endl;
    return 0;
}