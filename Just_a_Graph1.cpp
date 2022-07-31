#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int w[n];
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cin >> w[i];
        }
        for(int i = 1; i < n; i++){
            if(w[i]-w[i-1] == 1){
                cnt++;
            }
        }
        cout << cnt + 1 << endl;
    }
    return 0;
}
