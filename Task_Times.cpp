#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int sub[n],time[n];
        for(int i=0; i<n; i++){
            cin>>sub[i]>>time[i];
        }
        int arr[m];
        for(int i=0; i<n; i++){
            arr[sub[i]]++;
        }
        
    }
    return 0;
}