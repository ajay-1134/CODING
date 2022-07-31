#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char mat[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                    mat[i][j] = 'X';
                }
                else mat[i][j] = '=';
            }
        }
        int Flag = 0; 
        for(int i=0; i<n; i++){
            if(s[i] == '2'){
                int flag = 0;
                for(int j=0; j<n; j++){
                    if(s[j]=='2' && mat[j][i] == '=' && mat[i][j] == '='){
                        mat[i][j] = '+';
                        mat[j][i] = '-';
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0){
                    Flag = 1;
                    break;
                }
            }
        }
        if(Flag == 1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<mat[i][j];
                }
                cout<<endl;
            }
        }
    }
}