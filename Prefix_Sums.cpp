#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        if( (n/2)%2 == 0 ){
            cout<<"YES"<<endl;
            int var = n/4;
            int odd[n/2], even[n/2];
            for(int i=0; i<n/2; i++){
                odd[i] = (i+1)*2 - 1;
            }
            for(int i=0; i<n/2; i++){
                even[i] = (i+1)*2;
            }
            int ind = 0;
            while(var){
                int val = odd[ind];
                odd[ind] = even[ind];
                even[ind] = val;
                var--;
                ind++;
            }
            for(int i=0; i<n/2; i++){
                cout<<odd[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<n/2; i++){
                cout<<even[i]<<" ";
            }
            cout<<endl;
        } 
        else cout<<"NO"<<endl;
        
    }
    return 0;
}