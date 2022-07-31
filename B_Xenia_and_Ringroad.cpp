#include<bits/stdc++.h>
using namespace std;
#define int long long int


signed main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    int ptr = 1, ans = 0;
    for(int i=0; i<m; i++){
        if(arr[i] >= ptr){
            ans += (arr[i] - ptr);
            ptr = arr[i];
        }
        else{
            ans += n - (ptr - arr[i]);
            ptr = arr[i];
        }
    }
    cout<<ans<<endl;
}