#include<bits/stdc++.h>
using namespace std;
#define int long long int

string tobinary(int n,int size ){
    string ans = "";
    while(n){
        if(n%2==0){
            ans+='0';
        }
        else ans += '1';
        n/=2;
    }
    
    if(ans.length() < size){
        while(ans.length()!=size){
            ans+='0';
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

signed main(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m+1];
    for(int i=0; i<=m; i++){
        cin>>arr[i];
    }
    int temp = arr[m];
    
    int ans = 0;
    for(int i=0; i<m; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(tobinary(temp,n)[j] != tobinary(arr[i],n)[j]){
                cnt++;
            }
        }
        if(cnt <= k) ans++;

    }
    cout<<ans<<endl;
    return 0;
}