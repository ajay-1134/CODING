#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int arr[11] = {0};
        arr[a]++,arr[b]++,arr[c]++,arr[d]++;
        int ans = 0;
        for(int i=0; i<11; i++){
            if(arr[i] > 0) ans++;
        }
        if(ans == 3 || ans == 4) cout<<"2"<<endl;
        else if(ans == 2){
            if(arr[a] == 2) cout<<"2"<<endl;
            else cout<<"1"<<endl;
        }
        else cout<<"0"<<endl;
    }
    return 0;
}