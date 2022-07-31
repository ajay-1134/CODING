#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mat[n][n];
        if(n == 2) mat[0][0] = -1, mat[0][1] = -1, mat[1][0] = -1, mat[1][1] = -1;
        else{
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i==j) mat[i][j] = -1;
                    else mat[i][j] = 1;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}